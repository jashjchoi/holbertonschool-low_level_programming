#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - prints 2-d array of int
* @width: column of array
* @height: row of array
* Return: 2d array of int, NULL if fails or width(or height) <= 0
*/
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **dgrid;

	dgrid = malloc(sizeof(int *) * height);

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	if (dgrid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		dgrid[i] = malloc(sizeof(int) * width);

		for (j = 0; j < width; j++)
		{
			dgrid[i][j] = 0;
		}
		if (dgrid[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(dgrid[i]);
			}
			return (NULL);
		}	
	}
	return (dgrid);
}
