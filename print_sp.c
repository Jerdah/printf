#include "main.h"

/**
 * print_sp - function prints a space
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_sp(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	if (num >= 0)
		count += _print_sp(num);

	return (count);
}

/**
 * _print_sp - helper function to print a space
 * @num: the integer to determine if a space is needed
 *
 * Return: no of characters printed
 */
int _print_sp(int num)
{
	if (num >= 0)
		return (_putchar(' '));

	return (0);
}
