#include <stdio.h>
#include "holberton.h"
/**
* print_diagsums - prints the sum of 2 diagonals of int matrix
* @a: pointer to array
* @size: size of the array
*
* Return: 0
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int sum_left = 0;
	int sum_right = 0;

	for (i = 0; i < (size * size); i++)
	{
		sum_left = sum_left + a[i];
		i = i + size;
	}

	j = size - 1;
	for (i = 0; i < size; i++)
	{
		sum_right = sum_right + a[j];
		j = j + (size - 1);
	}
	printf("%d, %d\n", sum_left, sum_right);
}
