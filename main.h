#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef int (*print_func)(va_list);

/**
 * struct print_specifier - Struct to map conversion specifiers to functions
 * @specifier: The conversion specifier character
 * @func: The corresponding function to handle the specifier
 */
typedef struct print_specifier
{
	char specifier;
	print_func func;
} print_specifier_t;

int _printf(const char *format, ...);
int _putchar(int c);
int handle_specifier(char specifier, va_list args);
int print_c(va_list args);
int print_str(va_list args);
int _print_str(char *str);
int print_perc(va_list args);
int print_i(va_list args);
int print_number(int num);
int _print_number(int num);
int power(int base, int exponent);
int print_d(va_list args);
int _print_d(int num);
int count_digits(int num);
int print_o(va_list args);
int _print_o(unsigned int u_num);
int print_h(va_list args);
int print_h_recursive(unsigned int n);
int print_b(va_list args);
int _print_b(unsigned int n, int *count);
int print_u(va_list args);
int print_u_recursive(unsigned int n);
int print_H(va_list args);
int print_H_recursive(unsigned int n);
int print_r(va_list args);
int print_rot(va_list args);
int print_po(va_list args);
int print_np(va_list args);
int print_np_hex(char ch);

#endif
