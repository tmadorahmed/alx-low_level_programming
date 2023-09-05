#include <stdlib.h>
#include "main.h"
/**
 * free_grid -  a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
