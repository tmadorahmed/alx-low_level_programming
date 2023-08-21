#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @str: string to be reserved.
 */
void print_rev(char *str)
{
	int len = 0, a;

	while (str[a++])
		len++;

	for (a = len - 1; a >= 0; a--)
		_putchar(str[a]);

	_putchar('\n');
}
