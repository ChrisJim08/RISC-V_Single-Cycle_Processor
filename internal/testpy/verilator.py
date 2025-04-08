import subprocess
import os
import logging
from pathlib import Path

logger = logging.getLogger(__name__)

class Verilator:
    """Interface to simulate using Verilator with a preconfigured .f file."""
    def __init__(self, verilator_path, env):
        self.verilator_path = Path(verilator_path)
        self.env = env

        if not self.verilator_path.is_file():
            raise FileNotFoundError(f"Verilator not found at {verilator_path}")

        logger.debug(f"New Verilator runner using {verilator_path}")

    def build_from_f(self, f_file, cpp_file, output_dir):
        """Builds a Verilator simulation using a provided .f file that contains all options.
        Args:
            f_file: Path to a full-featured .f file (includes +incdir, --Mdir, etc.)
            cpp_file: Path to your sim_main.cpp
            output_dir: Folder Verilator should write output to (matches --Mdir in .f)
        Returns:
            True if build succeeded, False otherwise
        """
        try:
            subprocess.check_call(
            [str(self.verilator_path), "--cc", "-f", f_file, "--exe", cpp_file],
            env=self.env,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.STDOUT)


        except subprocess.CalledProcessError:
            logger.error("Verilator failed during code generation.")
            return False

        top = self._parse_top_module_from_f(f_file)
        if not top:
            logger.error("Could not determine top module from .f file.")
            return False

        try:
            subprocess.check_call([
                "make", "-C", output_dir, "-f", f"V{top}.mk", f"V{top}"
            ], env=self.env)
        except subprocess.CalledProcessError:
            logger.error("Make failed for Verilator build.")
            return False

        return True

    def sim(self, binary_path, trace_path=None, log_file=None, timeout=10):
        """Runs the Verilator simulation binary with optional trace path argument."""
        try:
            with open(log_file, "w") if log_file else subprocess.DEVNULL as f:
                args = [str(binary_path)]
                if trace_path:
                    args.append(str(trace_path))  # pass trace path as argv[1]

                subprocess.run(args,
                            stdout=f,
                            stderr=subprocess.STDOUT,
                            timeout=timeout,
                            env=self.env)
        except subprocess.TimeoutExpired:
            return "Simulation timed out."
        except subprocess.CalledProcessError as e:
            return f"Simulation failed with exit code {e.returncode}"
        return None


    @staticmethod
    def _parse_top_module_from_f(f_path):
        with open(f_path, "r") as f:
            for line in f:
                if line.strip().startswith("--top"):
                    return line.strip().split()[-1]
        return None

    @staticmethod
    def is_installed(config, env):
        return config.verilator_path and Path(config.verilator_path).is_file()
