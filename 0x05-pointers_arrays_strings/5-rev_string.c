#include "holberton.h"
/**
* _strlen - length of string
*
* @s: string
*
* Return: length of string
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

/**
* rev_string - reverse a string
*
* @s: string s
*/
void rev_string(char *s)
{
	int size = _strlen(s);
	char temp;
	char *start = s, *end = s;

	end = end + (size - 1);
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
