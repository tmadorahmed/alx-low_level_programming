#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @x: an input array
 * @y: an input integer
 * Return: Nothing
 */
void print_array(int *x, int y)
{
	int i = 0;

	for (; i < y; i++)
	{
		printf("%d", x[i]);
		if (i < y - 1)
			printf(", ");
	}
	putchar('\n');
}
