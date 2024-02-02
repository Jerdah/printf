#include "main.h"

/**
 * print_number - function prints an integer
 * @num: the integer to be printed
 *
 * Return: number of characters printed
 */
int print_number(int num)
{
	int count = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	count += _print_number(num);

	return (count);
}

/**
 * _print_number - helper function to print an integer
 * @num: the non-negative integer to be printed
 *
 * Return: number of characters printed
 */
int _print_number(int num)
{
	int count = 0;

	if (num / 10 != 0)
		count += _print_number(num / 10);
	count += _putchar(num % 10 + '0');

	return (count);
}
