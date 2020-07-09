#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocates memory for array
* @nmemb: number of elements in array
* @size: bytes of the elements in array
* Return: allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (sizeof(char) * nmemb * size); i++)
	{
		array[i] = 0;
	}
	return (array);
}
