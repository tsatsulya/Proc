#pragma once

#include <stdio.h>
#include <string.h>
#include "arrays.h"
#include "stdbool.h"

typedef struct Line {
    char* first_symbol;
    size_t length;
} Line;

define_array(Line);


void print_lines(array(Line) array);

int linecmp(Line string1, char* string2);
int linescmp(Line string1, Line string2);
bool line_is_number(Line string);
void puts_line(Line string);
int str_to_int(Line string);