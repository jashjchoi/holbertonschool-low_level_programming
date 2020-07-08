#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - frees 2-D grid
* @grid: address of 2-D grid
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
