#include "main.h"

/**
 * print_triangle - prints a triangle 
 * @s: size of triangle
 *
 * Return: void
 */


void print_triangle(int s)
{
	int x, y;

	if (s <= 0)
		_putchar('\n');
	for (x = 1; x <= s; x++)
	{
		for (y = 1; y <= s; y++)
		{
			if (y <= (s - x))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
