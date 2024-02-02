#include "main.h"

/**
 * print_b - function prints a binary representation of an unsigned integer
 * @args: variable arguments list containing an unsigned int
 *
 * Return: number of characters printed
 */
int print_b(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += _print_b(num, &count);
	}

	return (count);
}

/**
 * _print_b - print an integer in binary (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 *
 * Return: the number of bytes printed
 */
int _print_b(unsigned int n, int *count)
{
	int lastRetVal;

	if (n > 1)
		_print_b(n >> 1, count);

	lastRetVal = _putchar('0' + n % 2);
	if (lastRetVal < 0)
		*count = -1;
	else
		*count += lastRetVal;

	return (*count);
}
