#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies 2 numbers
* @argc: number(or length) of command arguments
* @argv: pointer to arguments
* Return: 0 if success, 1 if it doesn't receive 2 arguments
*/
int main(int argc, char *argv[])
{
	int multi_result;

	if (argc != 3)
	{
		return (printf("Error\n"), 1);
	}
	multi_result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multi_result);
	return (0);
}
