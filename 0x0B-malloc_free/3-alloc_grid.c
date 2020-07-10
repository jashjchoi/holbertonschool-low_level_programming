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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dgrid = malloc(sizeof(int *) * height);
	if (dgrid == NULL)
	{
		free(dgrid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		dgrid[i] = malloc(sizeof(int) * width);

		if (dgrid[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(dgrid[i]);
			}
			free(dgrid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			dgrid[i][j] = 0;
		}
	}
	return (dgrid);
}
