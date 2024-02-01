#include "main.h"

/**
 * handle_specifier - function releases the correct printf for a specifier
 * @specifier: conversion specifier character
 * @args: variable argument list
 * @specifiers: array of structs mapping specifiers to print functions
 *
 * Return: no of characters printed by the selected printf
 */
int handle_specifier(char specifier, va_list args, print_func *specifiers)
{
	int count = 0;
	int i = 0;

	for (i = 0; specifiers[i].specifier != '\0'; i++)
	{
		if (specifiers[i].specifier == specifier)
		{
			count += specifiers[i].func(args);
			break;
		}
	}
	return (count);
}
