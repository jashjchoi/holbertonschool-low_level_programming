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
	int wid;
	int leng;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (wid = 1; wid <= size; wid++)
		{
			_putchar('#');
			for (leng = 2; leng <= size; leng++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
