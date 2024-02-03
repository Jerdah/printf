#include "main.h"

/**
 * print_pl - function prints the plus
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_pl(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	if (num >= 0)
		count += _print_pl(num);

	return (count);
}

/**
 * _print_pl - helper function to print a plus
 * @num: the integer to determine if a plus is needed
 *
 * Return: no of characters printed
 */
int _print_pl(int num)
{
	if (num >= 0)
		return (_putchar('+'));
	return (0);
}
