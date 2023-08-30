#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @n: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *n)
{
	if (*n)
	{
		_putchar(*n);
		_puts_recursion(n + 1);
	}
	else
		_putchar('\n');
}
