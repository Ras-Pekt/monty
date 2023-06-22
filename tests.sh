#!/bin/bash

echo "executing bytecodes/000.m"
./monty bytecodes/000.m

echo "executing bytecodes/001.m"
./monty bytecodes/001.m

echo "executing bytecodes/00 (push and pall).m"
./monty bytecodes/00.m

echo "executing bytecodes/01.m"
./monty bytecodes/01.m

echo "executing bytecodes/06 (pint).m"
./monty bytecodes/06.m

echo "executing bytecodes/07 (pop).m"
./monty bytecodes/07.m

echo "executing bytecodes/09.m (swap)"
./monty bytecodes/09.m

echo "executing bytecodes/12.m (add)"
./monty bytecodes/12.m

echo "executing bytecodes/13.m (nop)"
./monty bytecodes/13.m
