#include "holberton.h"
/**
* puts2 - prints every 2 charc of string
*
* @str: string
*/
void puts2(char *str)
{
	int num = 0;

	while (*str != '\0')
	{
		if ((num % 2) == 0)
		{
			_putchar(*str);
		}
		num++;
		str++;
	}
	_putchar('\n');
}
