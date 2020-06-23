#include "holberton.h"
/**
* swap_int - swaps values of int a and int b
*
* @a: 1st input
* @b: 2nd input
*
* Return: int values
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
