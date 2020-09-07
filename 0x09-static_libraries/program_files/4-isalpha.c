#include "holberton.h"
/**
* _isalpha - checks for alphabetic char
*
* @c: char to test
*
* Return: 1 if c is alpha char, else 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
