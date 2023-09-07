#include <stdlib.h>
#include "main.h"
/**
 * array_range - a function that creates an array of integers
 * @min: minumum value
 * @max: maximum value
 * Return: pointer to newly created array
 * NULL if malloc fails
 * NULL if min > max
 */

int *array_range(int min, int max)
{
	int range, n;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (n = 0; n < range; n++)
	{
		*(p + n) = min + n;
	}

	return (p);
}
