#include "main.h"

/**
 * print_m - function prints a minus
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_m(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	if (num >= 0)
		count += _print_m(num);
	return (count);
}

/**
 * _print_m - helper function to print a minus
 * @num: the integer to determine if a minus is needed
 *
 * Return: no of characters printed
 */
int _print_m(int num)
{
	if (num >= 0)
		return (_putchar('-'));
	return (0);
}
