#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - prints all numbers from n to 98
*
* @n: starts from n
*
* Return: nothing
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	if (n > 98)
	{
		for (n = n; n > 98; n--)
	{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
