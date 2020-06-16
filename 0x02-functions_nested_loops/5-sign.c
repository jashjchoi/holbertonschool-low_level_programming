#include "holberton.h"
/**
* print_sign - prints the sign
*
* @n: n to test
*
* Return: 1 if n is pos, -1 if n is neg, else 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
