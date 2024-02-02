#include "main.h"

/**
 * print_o- function prints an octal
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_o(va_list args)
{
	unsigned int u_num = va_arg(args, unsigned int);

	int count = 0;

	if (u_num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	count += _print_o(u_num);

	return (count);
}

/**
 * _print_o - helper function to print an octal number
 * @u_num: the unsigned integer to print in octal
 *
 * Return: number of characters printed
 */
int _print_o(unsigned int u_num)
{
	int count = 0;

	if (u_num / 8 != 0)
		count += _print_o(u_num / 8);

	count += _putchar(u_num % 8 + '0');

	return (count);
}
