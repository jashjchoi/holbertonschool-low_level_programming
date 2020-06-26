#include "holberton.h"
/**
* reverse_array - reverses the elements of array
*
* @a: pointer to int array
* @n: length of int array
*/
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
