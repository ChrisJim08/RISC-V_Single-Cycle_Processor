#!/bin/bash

# RISC-V Toolflow Shell Script
# For use with RARS + Verilator setup

PYTHON=/usr/bin/python3

RED='\033[0;31m'
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
BLUE='\033[0;34m'
NC='\033[0m'

if [ -z "$PYTHON" ]; then
    echo -e "${RED}Python not set. Set it manually at the top of this script.${NC}"
    exit 1
fi

if [ "$1" == "new" ]; then
    if [ -d "riscv_proj" ]; then
        echo -e "${RED}Project already exists at ./riscv_proj/${NC}"
    else
        mkdir -p riscv_proj/{src,hex,test,asm,sim,build}
        touch riscv_proj/test/.gitkeep
        echo -e "${GREEN}Initialized new RISC-V project at ./riscv_proj/${NC}"
    fi

elif [ "$1" == "test" ]; then
    echo -e "${BLUE}Running test framework...${NC}"
    $PYTHON internal/testpy/test_framework.py "${@:2}"

elif [ "$1" == "clean" ]; then
    echo -e "${ORANGE}Cleaning build and output directories...${NC}"
    rm -rf build/ containers/ output/ *.vcd *.log *.hex

else
    echo "================================================================================"
    echo "             RISC-V TOOLFLOW | Verilator + RARS Based Testing Setup            "
    echo "================================================================================"
    echo -e "${BLUE}Commands:${NC}"
    echo -e "  ${ORANGE}new${NC}        → Initialize a new RISC-V project in ./riscv_proj/"
    echo -e "  ${ORANGE}test${NC}       → Run test framework using Verilator and RARS"
    echo -e "  ${ORANGE}clean${NC}      → Clean simulation build and test output files"
    echo ""
    echo -e "${BLUE}Examples:${NC}"
    echo -e "  ./riscv_tf.sh new"
    echo -e "  ./riscv_tf.sh test --files asm/add.s"
    echo -e "  ./riscv_tf.sh test --files asm/*.s --summary"
    echo ""
fi
