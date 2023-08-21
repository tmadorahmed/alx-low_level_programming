#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @s: The string containing characters.
 */
void puts2(char *s)
{
	int i, l = 0;

	while (s[i++])
		l++;

	for (i = 0; i < l; i += 2)
		_putchar(s[i]);

	_putchar('\n');
}
