#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - add positive numbers
* @argc: number (or length) of command arguments
* @argv: pointer to arguments
* Return: 0 if sucess, 1 if there's non-digit
*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int add_result = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					return (printf("Error\n"), 1);
				}
			}
			add_result = add_result + atoi(argv[i]);
		}
	}
	printf("%d\n", add_result);
	return (0);
}
