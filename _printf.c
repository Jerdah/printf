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
	const char *p = format;

	va_list args;

	va_start(args, format);

	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'c':
					{
						char c = va_arg(args, int);

						putchar(c);
						count++;
						break;
					}
				case 's':
					{
						const char *s = va_arg(args, const char *);

						const char *q = s;

						while (*q != '\0')
						{
							putchar(*q);
							q++;
							count++;
						}
						break;
					}
				case '%':
					{
						putchar('%');
						count++;
						break;
					}
				default:
					{
						break;
					}
			}
		}
		else
		{
			putchar(*p);
			count++;
		}
		p++;
	}

	va_end(args);

	return (count);
}
