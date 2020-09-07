#include "holberton.h"
/**
* _memcpy - copies memeory area
* @dest: pointer to the memory area to copy src into
* @src: source memory area to copy char from
* @n: number of bytes to copy
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
