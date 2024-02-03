#include "main.h"

/**
 * print_w - function prints the width
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_w(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	if (num >= 0)
		count += _print_w(num);

	return (count);
}

/**
 * _print_w - helper function to print the width
 * @num: the integer to determine if the width is needed
 *
 * Return: no of characters printed
 */
int _print_w(int num)
{
	if (num >= 0)
		return (_putchar('0'));
	return (0);
}
