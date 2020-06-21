#include "holberton.h"
/**
* print_times_table - prionts the n times table
*
* @n: int input
*
* Return: 0;
*/
void print_times_table(int n)
{
	int i;
	int j;
	int multi_result;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				multi_result = i * j;
				if (multi_result > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(multi_result / 100 + '0');
					_putchar((multi_result / 10) % 10 + '0');
					_putchar(multi_result % 10 + '0');
				}
				else if (multi_result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multi_result % 10 + '0');
				}
				else if (multi_result >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(multi_result / 10 + '0');
					_putchar(multi_result % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
