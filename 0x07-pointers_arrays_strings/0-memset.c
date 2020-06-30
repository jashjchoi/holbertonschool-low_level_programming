#include "holberton.h"
/**
* _memset - fills memeory with a const byte
* @s: pointer to the memory area to be filed
* @b: byte to fill the memory area
* @n: number of bytes to be filled
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
