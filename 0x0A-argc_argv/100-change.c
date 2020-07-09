#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* coin_change - prints num of coins
* @m: amount of money
* Return: min number of coins
*/
int coin_change(int m)
{
	int coins = 0;

	while (m != '\0')
	{
		if (m - 25 >= 0)
		{
			m = m - 25;
		}
		else if (m - 10 >= 0)
		{
			m = m - 10;
		}
		else if (m - 10 >= 0)
		{
			m = m - 5;
		}
		else if (m - 2 >= 0)
		{
			m = m - 2;
		}
		else if (m - 1 >= 0)
		{
			m = m - 1;
		}
		coins++;
	}
	return (coins);
}


/**
* main - prints the minimum number of coins to make change
* @argc: number of command arguments
* @argv: pointer to arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", coin_change(money));
	return (0);
}
