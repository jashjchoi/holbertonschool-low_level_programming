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
	int j, k;
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
	for (i = 0; i < width; i++)
	{
		dgrid[i] = malloc(sizeof(int) * width);
		if (dgrid[i] == NULL)
		{
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			dgrid[j][k] = 0;
		}
	}
	return (dgrid);
}
