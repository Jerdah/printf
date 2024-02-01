#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print_specifier - struct to map conversion specifiers to functions
 * @specifier: conversion specifier character
 * @func: function to handle the specifier
 */
typedef struct print_specifier
{
	char specifier;
	print_func func;
} print_specifier_t;

int _printf(const char *format, ...);
int _putchar(int c);
int handle_specifier(char specifier, va_list args, print_func *specifiers);
int print_char(va_list args);
int print_str(va_list args);
int print_perc(va_list args);
int print_int(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);

#endif
