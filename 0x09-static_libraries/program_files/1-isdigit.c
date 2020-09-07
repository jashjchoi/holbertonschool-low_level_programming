#include "holberton.h"
/**
* _isdigit - checks for a digit
*
* @c: int input of a single digit num
*
* Return: 1 if digit, 0 otherwise
*/
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
