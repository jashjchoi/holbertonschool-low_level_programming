#include <stdio.h>
#include "holberton.h"
/**
* _strspn - gets teh lenth of str of a prefix
* @s: pointer to the str to be checked
* @accept: pointer to the char to be searched
*
* Return: pointer to s that matches one of bytes in accpet, or NULL
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}
