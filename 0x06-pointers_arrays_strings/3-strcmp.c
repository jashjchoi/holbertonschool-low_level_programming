#include "holberton.h"
/**
* _strcmp - compares s1 and s2
*
* @s1: pointer to str1
* @s2: pointer to str2
*
* Return: difference of s1 and s2; 0 if they're equal
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
