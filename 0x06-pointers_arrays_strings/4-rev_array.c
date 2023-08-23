#include "main.h"

/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @i: the array of integers to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *i, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = i[n - 1 - index];
		i[n - 1 - index] = i[index];
		i[index] = tmp;
	}
}
