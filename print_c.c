#include "main.h"

/**
 * print_c - function prints a character
 * @args: ariable argument list
 *
 * Return: 1 (no of characters printed)
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
