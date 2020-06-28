#include "holberton.h"
/**
* cap_string - captialize all words in str
* @letter: pointer to input str
*
* Return: captalize the first letter
*/
char *cap_string(char *letter)
{
	int i;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; letter[i] != '\0'; i++)
	{
		if (letter[i] >= 'a' && letter[i] <= 'z')
		{
			for (j = 0; j < 12; j++)
			{
				if (letter[i - 1] == separators[j])
				{
					letter[i] = letter[i] - 32;
				}
			}
		}
		if (letter[i] == separators[1])
		{
			letter[i] = separators[0];
		}
	}
	return (letter);
}
