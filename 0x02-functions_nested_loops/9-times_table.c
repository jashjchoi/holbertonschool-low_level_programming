#include "holberton.h"
/**
* times_table - prints table of multiples
*
* Return: multi
*/
void times_table(void)
{
	int i;
	int j;
	int multi;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			multi = i * j;
			if (multi < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
