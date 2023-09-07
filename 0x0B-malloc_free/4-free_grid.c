#include <stdlib.h>
#include "main.h"
/**
 * free_grid - afunction that frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int n = 0;

	while (n < height)
	{

		free(grid[n]);
		n++;
	}

	free(grid);
}

