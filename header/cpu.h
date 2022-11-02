#pragma once

#include "utils.h"
#include "asm.h"
#include "stack.h" 


typedef struct Processor {

    int* code;
    int code_size;

    Stack* cpu_stack;
    int RAM[0x10000];

    bool equal_flag;
    bool above_flag;
    bool less_flag;
} Processor;


status_t cpu_load(Processor* CPU, const char* in_file_name);
status_t cpu_exec(Processor* cpu);