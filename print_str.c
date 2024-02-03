#include "main.h"

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
