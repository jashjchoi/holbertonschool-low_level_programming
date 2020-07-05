#include "holberton.h"
#include <stdio.h>
/**
* main - prints all arguments
* @argc: number(or length) of command arguments
* @argv: pointer to arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
