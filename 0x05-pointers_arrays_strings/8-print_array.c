#include <stdio.h>
#include "holberton.h"
/**
* print_array - prints n elemetns of an array of int
*
* @a: array
* @n: number of elements to be printed
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
