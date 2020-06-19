#include "holberton.h"
/**
* print_square - prints a square, followed by new line
*
* @size: size of width and length
*
* Return: square of #s, only new line if n <= 0
*/
void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			_putchar('#');
			for (column = 2; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
