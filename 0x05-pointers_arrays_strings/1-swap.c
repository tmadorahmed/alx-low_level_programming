#include "main.h"

/**
 * swap_int - swaps the values of int i and int j
 * @i: first int to swap
 * @j: second int to swap
 *
 * Return: void
 */
void swap_int(int *i, int *j)
{
	int c;

	c = *i;
	*i = *j;
	*j = c;
}
