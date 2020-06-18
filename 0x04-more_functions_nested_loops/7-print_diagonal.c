#include "holberton.h"
/**
* print_diagonal - draws '\' lines
*
* @n: input number of times '\' should be printed
*
* Return: empty space and line, makes triangle
*/
void print_diagonal(int n)
{
	int diagonal;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diagonal = 1; diagonal <= n; diagonal++)
		{
			for (space = 1; space < diagonal; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
