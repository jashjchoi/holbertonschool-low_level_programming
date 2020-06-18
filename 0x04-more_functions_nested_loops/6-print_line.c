#include "holberton.h"
/**
* print_line - draws a line in the terminal
*
* @n: input num of times of '_' should be printed
* @line: input for char '_'
* Return: a line. If n is <= 0, then no line
*/
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
