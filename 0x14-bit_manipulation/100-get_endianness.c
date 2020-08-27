#include "holberton.h"
/**
* get_endianness - checks the endianness of given number
* Return: 1 if little endian, 0 if big endian
*
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if (*c)
	{
		return (1);
	}
	return (0);
}
