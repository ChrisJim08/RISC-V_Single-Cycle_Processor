# dump_compare.py compares the output of the Test Framework provided Testbench and RARS. 
# Usase is as follows (works in both python 2 and 3, but tested with python 2.7):
# 	python dump_compare.py <testbench_file> <rars_file> <max_mismatches>
# Example Usage:
# 	python dump_compare.py dump.txt student_RARSdump.txt 10
#
# NOTE: max_mismatches need not be provided, it will default to 2.

import sys
import re
import time

rars_firstline_re = re.compile(r'[0-9]*\[inst #(?P<num>[0-9]+)\] (?P<instr>[0-9$a-z ,\-\(\)]+)') # statrts with [0-9]* to ignore known rars issue
student_firstline_re = re.compile(r'In clock cycle: (?P<cycle>[0-9]+)')
register_write_re = re.compile(r'Register Write to Reg: (?P<reg>[0-9A-Fa-fxX]+) Val: (?P<val>[0-9A-Fa-fxX]+)')
memory_write_re = re.compile(r'Memory Write to Addr: (?P<addr>[0-9A-Fa-fxX]+) Val: (?P<val>[0-9A-Fa-fxX]+)')
ovf_re = re.compile(r'Arithmetic Overflow Detected')
nop_re = re.compile(r'Register Write to Reg: 0x00.*')

student_done_re = re.compile(r'Execution is stopping! Clock Cycle: (?P<cycle>[0-9]+)')
rars_done_re = re.compile(r'\[inst #(?P<inst>\d+)\] halt')

def main():
    max_mismatches = 2

    if not 3 <= len(sys.argv) <= 4:
        print('Improper usage, expecting python dump_compare.py <testbench_file> <rars_file> <max_mismatches>')
        print('Note: max_mismatches will default to 2 if not set')
        return 1

    verilator_file_path = sys.argv[1]
    rars_file_path = sys.argv[2]
    if len(sys.argv) == 4:
        try:
            max_mismatches = int(sys.argv[3])
        except (ValueError, TypeError):
            print('Invalid Argument in position 4, only numbers are accepted')
            return 1
        
    print('Maximum Number of Mismatches Accepted: ' + str(max_mismatches))
    print('')

    dc = DumpCompare(verilator_file_path, rars_file_path, max_mismatches)
    dc.compare()

    dc.print_cpi()

class StudentReader: ############################################################################################################################
    '''
    Wraps a rars dump file object so that we can separate the skipping logic from the comparison logic
    '''

    def __init__(self, path):
        self.path = path
        self.f = open(path, "r")
        self.cyc_num = 0

        # Trackers for state
        self.current_pc = None
        self.current_instr = None
        self.in_reg_write = False
        self.in_mem_write = False
        self.reg_write_addr = None
        self.reg_write_data = None
        self.mem_write_addr = None
        
        
    def read_next(self):
        """
        Reads the next instruction from the verilator file.

        This will return either an instruction and a memory access, an
        intruction and a register access, or an instruction, reg access, and
        an overflow. Each return type will be a match object.

        """
        
        #print(f"[VerilatorReader] Clock Cyle: 0")

        while True:
            line = self.f.readline()
            if not line:
                #print("[VerilatorReader] Reached EOF")
                return None, None, None

            line = line.strip()

            # New Cycle
            if line == "1j":
                self.cyc_num +=1
                #print(f"[VerilatorReader] Clock Cyle: {self.cyc_num}")
                continue
            
            # Register Write Changed
            elif line.endswith('*'):
                if line.startswith('1'):
                    self.in_reg_write = True
                    #print("[VerilatorReader] Register write enabled")
                else:
                    self.in_reg_write = False
                    #print("[VerilatorReader] Register write disabled")

            # Register Write Address
            elif self.in_reg_write and line.endswith(' >'):
                self.reg_write_addr = int(line.split()[0][1:], 2)
                #print(f"[VerilatorReader] Register write address: 0x{self.reg_write_addr:02X}")
            
            # Register Write data
            elif self.in_reg_write and line.endswith(' 2'):
                self.reg_write_data = int(line.split()[0][1:], 2)
                #print(f"[VerilatorReader] Register write data: 0x{self.reg_write_data:08X}")

            # PC
            elif line.endswith(' G'):
                pc_bin = line.split()[0][1:]
                self.current_pc = int(pc_bin, 2) #########################################################################
                #print(f"[VerilatorReader] Found PC: 0x{self.current_pc:X}")
                if self.in_reg_write:
                    cycle_match = DummyMatch(
                        str(self.cyc_num), {'cycle': str(self.cyc_num)}
                    )
                    acc_match = DummyMatch(
                        f"Register Write to Reg: 0x{self.reg_write_addr:02X} Val: 0x{self.reg_write_data:08X}",
                        re_obj=register_write_re
                    )
                    # inst_match = DummyMatch(
                    #     f"PC=0x{self.current_pc:X}", {'num': '1', 'instr': f"0x{self.current_instr:X}"}
                    # )
                    return cycle_match, acc_match, None

            # Instruction
            elif line.endswith(' 8'):
                instr_bin = line.split()[0][1:]
                self.current_instr = int(instr_bin, 2)
                #print(f"[VerilatorReader] Found instruction: 0x{self.current_instr:X}")

            # Memory Write Changed
            elif line.endswith(' +'):
                if line.startswith('1'):
                    self.in_mem_write = True
                    #print("[VerilatorReader] Memory write enabled")
                else:
                    self.in_mem_write = False
                    #print("[VerilatorReader] Memory write disabled")

            # elif self.in_mem_write and line.startswith('b') and line.endswith(' 5'):
            #     self.mem_write_addr = int(line.split()[0][1:], 2)
            #     print(f"[VerilatorReader] Memory write address: 0x{self.mem_write_addr:X}")

            # elif self.in_mem_write and line.startswith('b') and line.endswith(' 6'):
            #     wr_data = int(line.split()[0][1:], 2)
            #     print(f"[VerilatorReader] Memory write data: 0x{wr_data:X}")
            #     self.in_mem_write = False
            #     return (self.cyc_num,
            #             DummyMatch(f"PC=0x{self.current_pc:X}"),
            #             DummyMatch(f"Memory Write to Addr: 0x{self.mem_write_addr:X} Val: 0x{wr_data:X}"))


    def close(self):
        self.f.close()

class DummyMatch:
    def __init__(self, content, groupdict=None, re_obj=None):
        self._content = content
        self._groupdict = groupdict or {}
        self.re = re_obj  # so DumpCompare can check s_acc.re

    def group(self, key=None):
        if key is None:
            return self._content
        return self._groupdict.get(key, 'na')

    def groupdict(self):
        return self._groupdict

# class DummyRegex:
#     """Provides a dummy regex object to satisfy compatibility"""
#     def search(self, content):
#         if "Register Write" in content or "Memory Write" in content:
#             return DummyMatch(content)
#         return None


class RarsReader:
    '''
    Wraps a rars dump file object so that we can separate the skipping logic from the comparison logic
    '''

    def __init__(self,path):
        self.path = path
        self.f = open(path, "r")
        self.buff = []
        self.inst_num = 1

    def read_next(self): 
        """
        Reads the next instruction from the student file.

        This will return either an instruction and a memory access, an
        intruction and a register access, or an instruction, reg access, and
        an overflow. Each return type will be a match object.

        """

        not_done = True
        while not_done:

            # Fill the buffer
            while (len(self.buff) < 3):
                self.buff.append(self.f.readline())

            if not self.buff[0]:
                # File is over
                return None, None, None

            inst = rars_firstline_re.search(self.buff[0])


            if not inst:
                # We didn't read a valid cycle, skip and move on
                rars_done = rars_done_re.search(self.buff.pop(0))
                if rars_done:
                    self.inst_num = int(rars_done.group("inst"))
                    return None, None, None
                return self.read_next()
            else:
                self.buff.pop(0)

            self.inst_num = inst.group("num")

            if "halt" in inst.group("instr"):
                # Same effect as EOF
                return None, None, None


            # Do we have a register or memory write next?
            acc = memory_write_re.search(self.buff[0])
            if acc:
                self.buff.pop(0)
            else:
                acc = register_write_re.search(self.buff[0]) # this will be None if this also fails
                if acc:
                    acc = normalize_rars_val(acc)
                    self.buff.pop(0)
                else:
                    # Doesn't do anything to reg or mem (control flow)
                    return self.read_next()
        

            # Lastly, do we have overflow?
            ovf = ovf_re.search(self.buff[0])
            if ovf:
                self.buff.pop(0)

            # Final checks -- is it a NOP? 
            if (not ovf and nop_re.search(acc.group())):
                not_done = True
            else:
                not_done = False
            
        return inst, acc, None #######################################
       
    def close(self):
        self.f.close()

def normalize_rars_val(acc):
    match = re.search(r'Val: (0x[0-9A-Fa-f]+)', acc.group())
    if not match:
        return acc  # fallback — no val string to normalize

    val = int(match.group(1), 16)
    val &= 0xFFFFFFFF  # clip to 32 bits
    clipped_val = f"0x{val:08X}"

    # replace the original value in the string
    new_line = re.sub(r'Val: 0x[0-9A-Fa-f]+', f'Val: {clipped_val}', acc.group())
    return DummyMatch(new_line, re_obj=acc.re)

class DumpCompare:
    helpinfo = '''
Helpful resources for Debugging:
verilator.trace : output from the VHDL testbench during program execution on your processor
rars.trace : output from RARS containing expected output
wave.vcd: waveform file generated by processor simulation, you can display this simulation in gtkwave without resimulating your processor by hand

'''


    def __init__(self, student_file, rars_file, max_mismatches=3, outfunc=print):
        self.student_reader = StudentReader(student_file)
        self.rars_reader = RarsReader(rars_file)
        self.student_path = student_file
        self.rars_path = rars_file
        self.max_mismatches = max_mismatches
        self.outfunc = outfunc
        self.mismatches = 0

        self.inst_num = 1 # Prevents a division by zero if no instructions issue
        self.clk_cyc = 0


    def print_error(self, cycle, inst, expected, actual, description):
        self.mismatches += 1

        if cycle:
            cycle_num = cycle.group('cycle')
        else:
            cycle_num = 'na'

        if inst:
            inst_num = inst.group('num')
            inst = inst.group('instr')
        else:
            inst_num = 'na'
            inst = 'na'

        if self.mismatches == 1:
            self.outfunc('Oh no...\n')
        self.outfunc(f'Cycle: {cycle_num}')
        self.outfunc(f'RARS instruction number: {inst_num}\tInstruction: {inst}')
        self.outfunc(f'Expected:\t{expected}')
        self.outfunc(f'Got     :\t{actual}')
        if description:
            self.outfunc(description)
        self.outfunc("")

    def compare(self):
        '''
        Compares the verilator and rars dump files for a program
        Returns True if sim succeeded, false otherwise
        '''
    
        while self.mismatches < self.max_mismatches:
   
            #get rars instruction
            m_inst, m_acc, m_ovf = self.rars_reader.read_next() 

            s_cycle, s_acc, s_ovf = self.student_reader.read_next() 
            
            # Both end
            if (not s_cycle) and (not m_inst):
                break

            if (not s_cycle) and m_inst:
                self.print_error(s_cycle, m_inst, m_acc.group(), "Execution stopped",
                    "Student execution ended prematurely")
                break
                
            if s_cycle and not m_inst: 
                self.print_error(s_cycle, m_inst, "Execution stopped", s_acc.group(),
                    "Student execution improperly continued")
                break
                

            if (m_acc.group() == s_acc.group()) and (type(m_ovf) == type(s_ovf)):
                # instruction is correct
                continue

            # Something is wrong... Loop as we may need to remove NOPs
            #
            # The way this looping works is that we first try to determine if
            # either MARs or the student is apparantly writing to register 0
            # eg is it a NOP. Note... there is a case where a reg write to 
            # zero may be triggering overflow. This should be caught by the 
            # student as it is valid.
            #
            # If overflow has been possibly detected... then refresh either
            # the rars stream or the student stream and try again, until
            # eventually we either match or error out.
            while True:
                # Both end
                if (not s_cycle) and (not m_inst):
                    break

                if not s_cycle: # Only happens at EOF
                    self.print_error(s_cycle, m_inst, m_acc, "Execution stopped",
                        "Student execution ended prematurely")
                    break
                if not m_inst: # Only happens at EOF
                    self.print_error(s_cycle, m_inst, "Execution stopped", "Execution stopped",
                        "Student execution ended prematurely")
                if (m_acc.group() == s_acc.group()) and (type(m_ovf) == type(s_ovf)):
                    # instruction is correct
                    break
                if m_acc.group() == s_acc.group():
                    # Overflow is wrong, is the student a NOP?
                    if nop_re.search(s_acc.group()):
                        s_cycle, s_acc, s_ovf = student_reader.read_next() 
                        continue
                    else:
                        exp = "Overflow" if m_ovf else "No Overflow"
                        got = "Overflow" if s_ovf else "No Overflow"
                        self.print_error(s_cycle, m_inst, exp, got, "Overflow is incorrect")
                        break
                # Is the student a NOP
                if nop_re.search(s_acc.group()):
                    s_cycle, s_acc, s_ovf = self.student_reader.read_next() 
                    continue # Try again

                # Is the rars a NOP
                if nop_re.search(m_acc.group()):
                    m_inst, m_acc, m_ovf = self.rars_reader.read_next() 
                    continue # Try again
                    
                # Is the write to the wrong structure?
                if (m_acc.re == memory_write_re) and (s_acc.re == register_write_re):
                    # Nop?
                    if nop_re.search(s_acc.group()):
                        s_cyle, s_acc, s_ovf = self.student_reader.read_next() 
                        continue
                    self.print_error(s_cycle, m_inst, m_acc.group(), s_acc.group(), "Wrote to incorrect structure")
                    break
                if (s_acc.re == memory_write_re) and (m_acc.re == register_write_re):
                    # Nop?
                    if nop_re.search(m_acc.group()):
                        m_inst, m_acc, m_ovf = self.rars_reader.read_next() 
                        continue
                    self.print_error(s_cycle, m_inst, m_acc.group(), s_acc.group(), "Wrote to incorrect structure")
                    break

                # all thats left is incorrect writes
                self.print_error(s_cycle, m_inst, m_acc.group(), s_acc.group(), "Incorrect write")
                break

        self.inst_num = self.rars_reader.inst_num
        self.clk_cyc = self.student_reader.cyc_num
   
        self.rars_reader.close()
        self.student_reader.close()

        #Print final message
        if self.mismatches == 0:
            self.outfunc('Victory!! Your processes matches RARS expected output with no mismatches!!')
            return True
        elif self.mismatches < self.max_mismatches:
            self.outfunc(f'Almost! your processor completed the program with  {self.mismatches}/{self.max_mismatches} allowed mismatches')
            self.outfunc(self.helpinfo)
            return False
        else:
            self.outfunc(f'You have reached the maximum mismatches ({self.mismatches})')
            self.outfunc(self.helpinfo)
            return False

    def get_cpi(self):
        return int(self.clk_cyc) / int(self.inst_num)

    def print_cpi(self):
        self.outfunc(f"Instructions: {self.inst_num:4}\tCycles: {self.clk_cyc:4}\tCPI: {int(self.clk_cyc)/int(self.inst_num):.4}")

    def write_cpi(self, f):
        f.write(f"Instructions issued: {self.inst_num}\n")
        f.write(f"Student Processor Cycles: {self.clk_cyc}\n")
        f.write(f"CPI: {int(self.clk_cyc)/int(self.inst_num):.4}\n")

if __name__ == '__main__':
    main()
