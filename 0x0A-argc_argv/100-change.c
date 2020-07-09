#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make change
* @argc: number of command arguments
* @argv: pointer to arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int cents = 0;
	int money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0");
		return (1);
	}
	else
	{
		if (money != 0)
		{
			while (money - 25 > 0)
			{
				money = money - 25;
			}
			while (money - 10 > 0)
			{
				money = money - 10;
			}
			while (money - 5 > 0)
			{
				money = money - 5;
			}
			while (money - 1 > 0)
			{
				money = money - 1;
			}
			cents++;
		}
	}
	printf("%d\n", cents);
	return (0);
}
