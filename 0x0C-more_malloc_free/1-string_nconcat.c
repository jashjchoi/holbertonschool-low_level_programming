#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concatenates 2 str
* @s1: pointer to 1st string
* @s2: pointer 2nd string
* @n: number of memory bytes to be copied
* Return: returns the shall point to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i = 0, j = 0, length1, length2;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}
	for (length1 = 0; s1[length1] != '\0'; length1++)
	{
		;
	}
	for (length2 = 0; s2[length2] != '\0'; length2++)
	{
		;
	}
	if (n < length2)
	{
		length2 = n;
	}
	j = j + i;
	array = malloc(sizeof(char) * (length1 + length2 + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		array[i] = s2[j];
		i++;
	}
	array[i] = '\0';
	return (array);
}
