#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @n: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *n, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + n[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += n[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
