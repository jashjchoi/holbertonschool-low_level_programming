#include "holberton.h"
#include <stdlib.h>
/**
* create_array - creates array of chars and initializas it with specific char
* @size: size of array
* @c: char to be initialized
* Return: pointer to the array, or NULL if fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
