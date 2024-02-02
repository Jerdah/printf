#include "main.h"

/**
 * print_rot - function prints a string encoded in rot13 format
 * @args: variable arguments list
 *
 * Return: no of characters printed
 */
int print_rot(va_list args)
{
	char *s = va_arg(args, char *);

	int count = 0;
	int i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		int base = (s[i] >= 'a' && s[i] <= 'z') ? 'a' : 'A';

		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			_putchar(((s[i] - base + 13) % 26) + base);
			count++;
		}

		else
		{
			_putchar(s[i]);
			count++;
		}
	}

	return (count);
}
