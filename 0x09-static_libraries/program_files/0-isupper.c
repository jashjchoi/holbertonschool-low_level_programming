#include "holberton.h"
/**
* _isupper - checks for uppercase char
*
* @c: int input of single char
*
* Return: 1 if uppercase, 0 for others
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
