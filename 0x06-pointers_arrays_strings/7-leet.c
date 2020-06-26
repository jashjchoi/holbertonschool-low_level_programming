#include "holberton.h"
/**
* leet - encodes str
*
* @str: pointer to input str
*
* Return: encoded str
*/
char *leet(char *str)
{
	char before[] = "aAeEoOtTlL";
	char after[] = "4433007711";

	int i;
	int j;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (before[j] == *(str + i))
			{
				*(str + i) = after[j];
			}
		}
	}
	return (str);
}
