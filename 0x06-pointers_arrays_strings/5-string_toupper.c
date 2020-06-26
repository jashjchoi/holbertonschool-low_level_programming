#include "holberton.h"
/**
* string_toupper - change lowercase char to uppercase
*
* @letter: pointer to input str
* Description: to get 'a' to 'A', substract 32
* Return: uppercase str
*/
char *string_toupper(char *letter)
{
	int i;

	for (i = 0; letter[i] != '\0'; i++)
	{
		if (letter[i] >= 'a' && letter[i] <= 'z')
		{
			letter[i] = letter[i] - 32;
		}
	}
	return (letter);
}
