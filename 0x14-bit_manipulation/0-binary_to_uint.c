#include "holberton.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to str
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 1;
	int len;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len]; len++)
	{
		;
	}
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		num += (b[len] - '0') * base;
		base *= 2;
	}
	return (num);
}
