#include "holberton.h"
/**
* _strncat - concatenates n chars from dest to src
*
* @dest: pointer to the dest str
* @src: pointer to the src str
* @n: number of bytes to be printed
* Return: pointer to modified dest str
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
