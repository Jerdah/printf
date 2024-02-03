#include "main.h"

/**
 * print_sh - function prints a length modifier
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_sh(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	if (num >= 0)
		count += _print_sh(num);
	return (count);
}

/**
 * _print_sh - helper function to print the length modifier
 * @num: the integer to determine if the length modifier is needed
 *
 * Return: no of characters printed
 */
int _print_sh(int num)
{
	if (num >= 0)
		return (_putchar('h'));
	return (0);
}
