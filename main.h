#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_string(char *str, int *len);
void print_number(int, int *);
void print_binary(unsigned int, int *);
#endif
