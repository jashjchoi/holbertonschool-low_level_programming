#include "holberton.h"
/**
* get_bit - returns the value of a bit at a given index.
* @n: input long integer
* @index: index
* Return: void
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
