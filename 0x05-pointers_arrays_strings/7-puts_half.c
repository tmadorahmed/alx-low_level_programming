#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, i, x;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		x = len / 2;

	else
		x = (len + 1) / 2;

	for (i = x; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
