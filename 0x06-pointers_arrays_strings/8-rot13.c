#include "holberton.h"
/**
* rot13 - encodes a string using rot13
*
* @str: input string
*
* Return: pointer of string
*/
char *rot13(char *str)
{
	int i;
	int j;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (x[j] == *(str + i))
			{
				*(str + i) = y[j];
				break;
			}
		}
	}
	return (str);
}
