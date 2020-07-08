#include "holberton.h"
#include <stdlib.h>
/**
* _strlen - returns lengh of s
* @s: pointer to str
* Return: length of str
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
* _strdup - returns a pointer to a new string which is a duplicate of the string str
* @str: str to be copied 
* Return: pointer to dup_str, NULL if str is NULL or insuffient memory available
*/
char *_strdup(char *str)
{
	int i;
	int length;
	char *dup_str;

	if (str == 0)
	{
		return (NULL);
	}
	length = _strlen(str);
	dup_str = malloc (sizeof(char) * (length + 1));

	if (dup_str == NULL)
	{
		return (NULL);	
	}
	for (i = 0; i < length; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[i] = '\0';
	return (dup_str);
}
