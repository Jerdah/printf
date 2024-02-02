#include "main.h"

/**
 * print_r - functions prints a string in reverse order
 * @args: variable arguments list
 *
 * Return: no of characters printed
 */

int print_r(va_list args)
{
	char *s = va_arg(args, char *);

	size_t len = 0;
	size_t i;

	if (s == NULL || *s == '\0')
	{
		_putchar('\0');
		return (0);
	}

	while (s[len] != '\0')
		len++;

	for (i = len; i > 0; i--)
		_putchar(s[i - 1]);

	return (len);
}
