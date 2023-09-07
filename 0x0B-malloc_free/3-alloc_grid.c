#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 *2 dimensional array of integers.
 *@width: width oàf array
 *@height: height of array
 *
 *Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		while (i < height)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				while (j < width)
				{
					array[i][j] = 0;
					j++;
				}
				i++;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
