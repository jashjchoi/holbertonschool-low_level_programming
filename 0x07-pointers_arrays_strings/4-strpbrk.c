#include <stdio.h>
#include "holberton.h"
/**
* _strpbrk - searches str for any of a set of bytes
* @s: pointer to the str to be checked
* @accept: pointer to the char to be searched
*
* Return: pointer to s that matches one of bytes in accept, or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
