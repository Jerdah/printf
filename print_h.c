#include "main.h"

/**
 * print_h - function prints a hexadecimal
 * @args: Variable argument list
 *
 * Return: no of characters printed
 */
int print_h(va_list args)
{
	unsigned int u_num = va_arg(args, unsigned int);

	return (print_h_recursive(u_num));
}

/**
 * print_h_recursive - recursively prints lowercase hexadecimal representation
 * @n: the integer to print
 *
 * Return: the number of characters printed
 */
int print_h_recursive(unsigned int n)
{
	int count = 0;

	if (n > 15)
		count += print_h_recursive(n / 16);

	count += _putchar("0123456789abcdef"[n % 16]);

	return (count);
}
