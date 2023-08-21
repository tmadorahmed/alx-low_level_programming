#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @x: string to be reserved.
 */
void print_rev(char *x)
{
	int l = 0, a;

	while (x[a++])
		l++;

	for (a = l - 1; a >= 0; a--)
		_putchar(x[a]);

	_putchar('\n');
}
