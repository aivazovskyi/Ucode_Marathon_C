#pragma once

#define INCORRECT_OPERAND_TEXT "error: invalid number"
#define INCORRECT_OPERATION_TEXT "error: invalid operation"
#define DIV_BY_ZERO_TEXT "error: division by zero"
#define USAGE_TEXT "usage: ./calc [operand1] [operation] [operand2]"
#define GENERAL_ERROR (DIV_BY_ZERO + 1)

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

typedef struct s_args {
    int a;
    int b;
    char op;
}              t_args;

bool mx_isdigit(char c);
bool mx_isspace(char c);
int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printint(int num);
int mx_atoi(const char *str);
void mx_check_args(int argc, char **argv);
t_args mx_parse_args(char **argv);
int mx_do_calc(t_args args);
