#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed, excluding the null byte used
 * to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			count += handle_specifier(*format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(args);

	return (count);
}
