#include <stdio.h>
#include "holberton.h"
/**
* _strchr - locates a char in a str
* @s: pointer to the str to be checked
* @c: pointer to the char to be searched
*
* Return: pointer to the 1st occurence, or null if any
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
