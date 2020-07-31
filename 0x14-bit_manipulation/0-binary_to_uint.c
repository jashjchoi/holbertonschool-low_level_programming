#include "holberton.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to str
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, digit = 1, output = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[num] != '\0')
	{
		if (b[num] != '\0' && b[num] != '1')
		{
			return (0);
		}
		num++;
	}
	while (num--)
	{
		if (b[num] == '1')
		{
			output += digit;
		}
		digit = digit << 1;
	}
	return (output);
}
