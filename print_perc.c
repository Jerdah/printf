#include "main.h"

/**
 * print_perc - function prints the literal '%' character
 * @args: variable arguments list
 *
 * Return: no of characters printed
 */
int print_perc(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
