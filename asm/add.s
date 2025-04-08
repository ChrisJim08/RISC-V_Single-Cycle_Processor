# Simple RISC-V test program for simulation

    .text
    .globl _start

_start:
    li x5,  10         # x5 = 10
    li x6,  20         # x6 = 20

    add x10, x5, x6    # x10 = 10 + 20 = 30
    sub x11, x6, x5    # x11 = 20 - 10 = 10
    and x12, x5, x6    # x12 = 10 & 20 = 0b1010 & 0b10100 = 0

loop:
    j loop             # Infinite loop to keep simulation alive
