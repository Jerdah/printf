#include "main.h"

/**
 * print_np_hex - function prints a non-printable character in hexadecimal
 * format
 * @ch: the non-printable character to print
 *
 * Return: number of characters printed
 */
int print_np_hex(char ch)
{
	int count = 0;

	_putchar('\\');
	_putchar('x');

	if (ch < 16)
		count += _putchar('0');
	count += _printf("%X", ch);

	return (count + 2);
}

/**
 * print_np - function prints non-printable characters in a special format
 * @args: variable arguments list
 *
 * Return: number of characters printed
 */
int print_np(va_list args)
{
	char *str = va_arg(args, char *);

	int count = 0;

	if (str == NULL)
		return (0);

	while (*str)
	{
		int cur_count;

		if (*str < 32 || *str >= 127)
			cur_count = print_np_hex(*str);
		else
			cur_count = _putchar(*str);

		count += cur_count;
		str++;
	}

	return (count);
}
