#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x = 'a';
	int y = 0;

	while (y < 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		x = 'a';
		y++;
		_putchar('\n');
	}
}
