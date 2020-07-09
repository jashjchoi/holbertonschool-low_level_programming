#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - Returns a pointer to the allocated memory
* @b: number of memory bytes to be allocated
* Return: the pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
		return (a);
	}
	return (a);
}
