#include "holberton.h"
/**
* cap_string - captialize all words in str
* @str: pointer to input str
*
* Return: captalize the first letter
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			if (str[i] == '\t')
			{
				str[i] = ' ';
			}
		}
	}
	return (str);
}
