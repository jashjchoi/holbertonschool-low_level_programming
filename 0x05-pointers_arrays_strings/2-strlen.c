#include "holberton.h"
/**
* _strlen - prints the length of string
* 
* @s: string type pointer
*
* Return: length of the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
