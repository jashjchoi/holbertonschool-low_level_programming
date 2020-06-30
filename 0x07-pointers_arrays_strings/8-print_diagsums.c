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
	int j;
	int sum_leftDiag = 0;
	int sum_rightDiag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_leftDiag = sum_leftDiag + a[i][j];
			}
			if ((i + j) == (size - 1))
			{
				sum_rightDiag = sumrightDiag + a[i][j];
			}
		}
	}
	printf("%d", "%d\n", sum_leftDiag, sum_rightDiag);
}
