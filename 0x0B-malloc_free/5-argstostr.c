#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - concatenates all arugments
* @ac: number(or length_ of command arguments
* @av: pointer to arguments
* Return: arguments followed by \n in the new string
*/
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int count = 0;
	char *con_str;

	if (ac <= 0)
	{
		return (NULL);
	}
	if (ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}

	con_str = malloc(sizeof(char) * count + 1);
	if (con_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			con_str[k] = av[i][j];
			k++;
		}
		con_str[k] = '\n';
		k++;
	}
	con_str[k] = '\0';
	return (con_str);
}
