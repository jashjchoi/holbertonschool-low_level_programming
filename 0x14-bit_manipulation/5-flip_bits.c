#include "holberton.h"
/**
* flip_bits - returns the number of bits to be flipped to convert num
* @n: first unsigned int
* @m: second unsigned int
* Return: number of bits to be flipped to get from 1 num to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	while ((n != 0) || (m != 0))
	{
		if ((n == 0) && (m == 0))
		{
			break;
		}
		if ((n & 1) != (m & 1))
		{
			counter++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (counter);
}
