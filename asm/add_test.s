.text
.globl _start
_start:
    li x1, 10          # Load 10 into x1
    li x2, 20          # Load 20 into x2
    add x3, x1, x2     # x3 = x1 + x2
    add x4, x3, x1     # x4 = x3 + x1
    add x5, x0, x0     # Clear x5
    j done             # Jump to exit

done:
    nop
