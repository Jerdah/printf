#include "main.h"

/**
 * handle_specifier - function selects and invokes the correct printf
 * function for a given conversion specifier
 * @specifier: conversion specifier character
 * @args: variable argument list
 *
 * Return: no of characters printed by the selected printf
 */
int handle_specifier(char specifier, va_list args)
{
	print_specifier_t specs[] = {
		{'c', print_c},
		{'s', print_str},
		{'%', print_perc},
		{'d', print_d},
		{'i', print_i},
		{'u', print_u},
		{'b', print_b},
		{'o', print_o},
		{'x', print_h},
		{'X', print_H},
		{'r', print_r},
		{'R', print_rot},
		{'p', print_po},
		{'S', print_np},
		{'\0', NULL}
	};

	int i = 0;

	while (specs[i].func != NULL)

	{
		if (specs[i].specifier == specifier)
			return (specs[i].func(args));
		i++;
	}

	return (_putchar('%') + _putchar(specifier));
}
