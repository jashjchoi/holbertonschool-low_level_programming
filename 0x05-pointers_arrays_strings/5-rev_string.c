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
	int string_length = _strlen(s);
	char temp;
	char *start = s;
	char *end = s;

	end = end + (string_length - 1);
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
