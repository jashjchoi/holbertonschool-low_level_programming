#include "holberton.h"
#include <stdlib.h>
/**
* _strlen - returns length of s
* @s: pointer to str
* Return: length of str
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
* str_concat - concatenates two different strings
* @s1: pointer to 1st str
* @s2: pointer to 2nd str
* Return: concatenated str, NULL if fails or str == NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, length1, length2;
	char *array;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	array = malloc(sizeof(*array) * length1 + length2 + 1);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < length2; i++, j++)
	{
		array[i] = s2[j];
	}
	array[i] = '\0';
	return (array);
}
