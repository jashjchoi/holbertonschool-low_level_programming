#include "holberton.h"
/**
* print_triangle - prints a right triangle
*
* @size: int of the size of triangle\
*
* Return: always 0
*/
void print_triangle(int size)
{
	int row;
	int col;
	int empty_space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
		for (empty_space = 1; empty_space <= size - row; empty_space++)
		{
			_putchar(' ');
		}
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
