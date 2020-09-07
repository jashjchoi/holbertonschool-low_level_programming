#include <stdio.h>
#include "holberton.h"
/**
* _strstr - locates a substring
* @haystack: pointer to str
* @needle: pointer to substr
*
* Return: substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
		char *str1 = haystack;
		char *str2 = needle;

		while (*haystack && *str2 && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (!*str2)
		{
			return (str1);
		}
		haystack = str1 + 1;
	}
	return (NULL);
}
