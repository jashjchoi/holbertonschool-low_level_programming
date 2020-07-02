#include "holberton.h"
/**
* recursive_strlen - returns the length of str
* @str: str
* Return: length of str
*/
int recursive_strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + recursive_strlen(str + 1));
	}
}

/**
* testing_palindrome - checking if str is a palindrome or not
* @start: first character of str
* @end: last character of str
* @str: given string
* Return: 1 if pailndrome, 0 if no palindrome
*/
int testing_palindrome(int start, int end, char *str)
{
	if (start >= end)
	{
		return (1);
	}
	if (str[start] != str[end])
	{
		return (0);
	}
	else
	{
		return (testing_palindrome(start + 1, end - 1, str));
	}
}
/**
* is_palindrome - states if str is palindrome or not
* Description: use 2 recursive functions
* @s: str to be checked
* Return: returns 1 if palindrome, 0 if no palindrome
*/
int is_palindrome(char *s)
{
	int end_index;

	end_index =  recursive_strlen(s) - 1;
	return (testing_palindrome(0, end_index, s));
}
