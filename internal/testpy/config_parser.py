""" Simplified config parser for Verilator + RARS workflow only. """

from configparser import ConfigParser
from collections import namedtuple
from pathlib import Path
import os
import json

CONFIG = namedtuple("CONFIG", "verilator_path rars_path")

def read_config(config="DEFAULT"):
    """Reads config.ini and returns config values and updated env."""
    config_file = Path("internal/.config.ini").resolve()
    c = ConfigParser()

    if not config_file.is_file():
        raise FileNotFoundError("config.ini not found. Please create one with rars_path and verilator_path.")

    c.read(config_file)

    if not c.has_section(config):
        raise ValueError(f"Section {config} does not exist in config.ini.")

    verilator_path = json.loads(c.get(config, "verilator_path"))
    rars_path = json.loads(c.get(config, "rars_path"))

    ret = CONFIG(verilator_path, rars_path)

    return ret, os.environ.copy()

if __name__ == "__main__":
    from pprint import pprint
    config, env = read_config()
    pprint(config)