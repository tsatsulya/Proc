#pragma once

#include "utils.h"
#include "stdio.h"



typedef enum TokenType {
    NUMBER    = 'N',
    IDENT_COMMAND  = 'I',
    UNDF_TYPE = 'U'
}TokenType;

typedef struct Token {
    TokenType type;
    char* name;
    int number; 
}Token;

static const Token POISON = {'U', "UNDEFINED", 0};


status tokenize(Token** tokens, size_t* num_of_tokens, const char* const code_file_name);

//int get_sequence( char *dest, const char* const code, const  input_formats_first_id );