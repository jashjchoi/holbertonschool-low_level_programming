#include "holberton.h"
/**
* *_strcpy - copy the string pointed to by src
*
* @src: copy string from src
* @dest: copy string to dest
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < src[i]; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
