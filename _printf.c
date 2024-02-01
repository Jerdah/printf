#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed, exclude the null byte used
 * to end output to strings)
 *
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	va_end(args);
	return (count);
}
