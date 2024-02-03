#include "main.h"

/**
 * print_ha - function prints a hash
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_ha(va_list args)
{
	int num = va_arg(args, int);

	int count = 0;

	if (num >= 0)
		count += _print_ha(num);
	return (count);
}

/**
 * _print_ha - helper function to print a hash
 * @num: the integer to determine if a hash is needed
 *
 * Return: no of characters printed
 */
int _print_ha(int num)
{
	if (num >= 0)
		return (_putchar('#'));
	return (0);
}
