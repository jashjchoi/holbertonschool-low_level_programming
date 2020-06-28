#include "holberton.h"
/**
* cap_string - captialize all words in str
* @letter: pointer to input str
*
* Return: captalize the first letter
*/
char *cap_string(char *letter)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;
	int j;

	for (i = 0; letter[i] != '\0'; i++)
	{
		if (letter[i] >= 'a' && letter[i] <= 'z')
		{
			for (j = 0; j <= 12; j++)
			{
				if (letter[i - 1] == separators[j])
				{
					letter[i] = letter[i] - 32;
				}
			}
		}
		if (letter[i] == '\t')
		{
			letter[i] = ' ';
		}
	}
	return (letter);
}
