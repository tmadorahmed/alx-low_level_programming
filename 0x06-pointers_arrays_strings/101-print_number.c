#include "main.h"

/**
 * print_number -  a function that prints an integer.
 * @i: integer input
 * Return: nothing
 */

void print_number(int i)
{
	unsigned int x, y, count;

	if (i < 0)
	{
		_putchar(45);
		x = i * -1;
	}
	else
	{
		x = i;
	}

	y = x;
	count = 1;

	while (y > 9)
	{
		y /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((x / count) % 10) + 48);
	}
}
