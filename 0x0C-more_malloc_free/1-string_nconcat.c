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
	unsigned int i, a, b;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		;
	}
	if (n < b)
	{
		b = n;
	}
	array = malloc(sizeof(char) * (a + b + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a + b; i++)
	{
		if (i >= a)
		{
			array[i] = s2[i - a];
		}
		else
		{
			array[i] = s1[i];
		}
	}
	array[i] = '\0';
	return (array);
}
