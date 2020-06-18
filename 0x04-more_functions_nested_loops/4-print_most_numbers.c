#include "holberton.h"
/**
* print_most_numbers - prints numbers except 2 & 4
*
* Return: num from 0 to 9 except 2 & 4
*/
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if ((i == 2) || (i == 4))
		{
			i++;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
