#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int len;

	len = _printf("Hope the _printf function works: %c, %s, and %%\n", 'C', "Hello, World!");
	printf("Number of characters printed: %d\n", len);

	return (0);
}
