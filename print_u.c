#include "main.h"

/**
 * print_u - function prints an unsigned integer
 * @args: variable arguments list
 *
 * Return: no of characters printed
 */
int print_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_u_recursive(num));
}

/**
 * print_u_recursive - recursively prints an unsigned integer
 * @n: the integer to print
 *
 * Return: the number of characters printed
 */
int print_u_recursive(unsigned int n)
{
	int count = 0;

	if (n > 9)
		count += print_u_recursive(n / 10);

	count += _putchar('0' + n % 10);

	return (count);
}
