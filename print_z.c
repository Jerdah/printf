#include "main.h"

/**
 * print_z - function prints a zero
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_z(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	if (num >= 0)
		count += _print_z(num);

	return (count);
}

/**
 * _print_z - helper function to print a zero
 * @num: the integer to determine if a zero is needed
 *
 * Return: no of characters printed
 */
int _print_z(int num)
{
	if (num >= 0)
		return (_putchar(' '));
	return (0);
}
