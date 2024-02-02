#include "main.h"

/**
 * print_po - function prints the address stored in a pointer
 * @args: variable arguments list
 *
 * Return: no of characters printed
 */
int print_po(va_list args)
{
	void *ptr = va_arg(args, void *);

	if (ptr == NULL)
		return (_printf("(nil)"));
	return (_printf("0x%lx", (unsigned long)ptr));
}
