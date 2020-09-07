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

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
