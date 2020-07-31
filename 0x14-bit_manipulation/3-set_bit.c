#include "holberton.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: input long integer
 * @index: index
 * Return: 1 if sucess, or -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	num = 1 << index;
	*n = (*n | num);

	return (1);
}
