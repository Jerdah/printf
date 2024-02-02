#include "main.h"

/**
 * power - calculates the power of a number
 * @base: the base
 * @exponent: the exponent
 *
 * Return: the result of base raised to the power of exponent
 */
int power(int base, int exponent)
{
	int result = 1;
	int i = 0;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * print_d - function that prints an integer
 * @args: arguments list containing the integer to print
 *
 * Return: no of characters printed (excluding null byte)
 */
int print_d(va_list args)
{
	int num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	return (_print_d(num));
}

/**
 * _print_d - helper function to print an integer
 * @num: the integer to print
 *
 * Return: no of characters printed
 */
int _print_d(int num)
{
	int num_digits;
	int divisor;

	num_digits = 0;

	if (num_digits == 0)
	{
		_putchar('0');
		return (1);
	}

	divisor = power(10, num_digits - 1);

	while (divisor > 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
	}

	return (num_digits);
}

/**
 * count_digits - helper function to count digits in an integer
 * @num: the integer to count digits in
 *
 * Return: number of digits in num
 */
int count_digits(int num)
{
	int count = 0;

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return (count);
}
