#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @n: The string to be printed
 */

void _print_rev_recursion(char *n)
{
	if (*n)
	{
		_print_rev_recursion(n + 1);
		_putchar(*n);
	}
}
