#include "holberton.h"
/**
* clear_bit -  sets the value of a bit to 0 at a given index.
* @n: unsigned long integer
* @index: index
* Return: void
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	num = ~(1 << index);
	*n = *n & num;

	return (1);
}
