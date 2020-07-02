#include "holberton.h"
/**
* _strlen_recursion - returns the length of str
* @s: str
* Return: string length
*/
int _strlen_recursion(char *s)
{
	int str_length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		str_length = (1 + _strlen_recursion(s + 1));
		return (str_length);
	}
}
