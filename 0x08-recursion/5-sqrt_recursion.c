#include "holberton.h"
/**
* testing_sqrt - checking if n has a natrual sqrt
* @i: checking divisior
* @base_num: base number to find the sqrt
* Return: sqrt of base_num or -1 if no sqrt
*/
int testing_sqrt(int i, int base_num)
{
	if (i * i == base_num)
	{
		return (i);
	}
	if (i * i > base_num)
	{
		return (-1);
	}
	else
	{
		return (testing_sqrt(i + 1, base_num));
	}
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: int to find sqrt
* Return: natrual sqrt or -1 if n does not have a natural sqrt
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (testing_sqrt(1, n));
}
