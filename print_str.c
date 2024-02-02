#include "main.h"

/**
 * print_str - function prints a string
 * @args: variable arguments list
 *
 * Return: no of characters printed
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	return (_print_str(s));
}

/**
 * _print_str - helper function to print a string
 * @str: the string to print
 *
 * Return: no of characters printed
 */
int _print_str(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
