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

	print_func specifiers[] = {
		print_c,
		print_s,
		print_p,
		print_i,
		print_o,
		print_h,
		print_b,
		print_u,
		NULL};

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_specifier(*format, args, specifiers);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}
