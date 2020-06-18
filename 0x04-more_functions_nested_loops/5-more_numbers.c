#include "holberton.h"
/**
* more_numbers - prints 10 times of 0 to 14 numbers
*
* Return: 0 to 14 * 10 times, and the new line
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
