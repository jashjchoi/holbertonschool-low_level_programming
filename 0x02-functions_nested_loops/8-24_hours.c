#include <stdio.h>
#include "holberton.h"
/**
* jack_bauer - prints every min of the day of Jack
*
* Return: nothing
*/

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');

			_putchar(':');

			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
