#include "holberton.h"
/**
* _puts_recursion - prints str followed by a new line
* @s: str to print
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
