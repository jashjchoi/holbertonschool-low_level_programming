#include "holberton.h"
/**
* puts_half - prints the second half of string
*
* @str: string
*
* Return: void
*/
void puts_half(char *str)
{
	int length;

	length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	if ((length % 2) == 0)
	{
		str = str - (length / 2);
	}
	else
	{
		str = str - ((length - 1) / 2);
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
