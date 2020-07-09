#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - creates an array of int
* @min: pointer to min int
* @max: pointer to max int
* Return: array of integers ordered from min to max
*/
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
