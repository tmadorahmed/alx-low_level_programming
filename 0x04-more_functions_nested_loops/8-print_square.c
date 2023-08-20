#include "main.h"

/**
 * print_square - prints a square
 * @s: size of the square
 *
 * Return: void
 */


void print_square(int s)
{
	int x, y;

	if (s <= 0)
		_putchar('\n');

	for (x = 0; x < s; x++)
	{
		for (y = 0; y < (s); y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
