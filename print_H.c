#include "main.h"

/**
 * print_H - function prints an uppercase hexadecimal representation of an
 * unsigned integer
 * @args: variable arguments list
 *
 * Return: number of characters printed
 */
int print_H(va_list args)
{
	unsigned int u_num = va_arg(args, unsigned int);

	return (print_H_recursive(u_num));
}

/**
 * print_H_recursive - recursively prints uppercase hexadecimal representation
 * @n: the integer to print
 *
 * Return: the number of characters printed
 */
int print_H_recursive(unsigned int n)
{
	int count = 0;

	if (n > 15)
		count += print_H_recursive(n / 16);

	count += _putchar("0123456789ABCDEF"[n % 16]);

	return (count);
}
