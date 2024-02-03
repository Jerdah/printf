#include "main.h"

/**
 * print_pre - function prints a precisiom
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_pre(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	if (num >= 0)
		count += _print_pre(num);

	return (count);
}

/**
 * _print_pre - helper function to print a precision
 * @num: the integer to determine if a precision is needed
 *
 * Return: no of characters printed
 */
int _print_pre(int num)
{
	if (num >= 0)
		return (_putchar('.'));
	return (0);
}
