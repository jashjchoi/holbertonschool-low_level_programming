#include "holberton.h"
/**
* _islower - checks if the char is lowercase
*
* @c: char to test
*
* Return: always 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
