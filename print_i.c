#include "main.h"

/**
 * print_i - function prints an integer
 * @args: variable argument list
 *
 * Return: no of characters printed
 */
int print_i(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	count += print_number(num);

	return (count);
}
