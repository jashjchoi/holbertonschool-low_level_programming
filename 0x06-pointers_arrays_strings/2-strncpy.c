#include "holberton.h"
/**
* _strncpy - copies first n characters from src to dest
*
* @dest: pointer to dest str
* @src: pointer to src str
* @n: number of elements to be printed
*
* Return: output strings 
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
