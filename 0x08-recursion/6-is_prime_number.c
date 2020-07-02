#include "holberton.h"
/**
* testing_prime - checking n is a prime or not using recursion
* @i: checking divisor
* @base_num: base number
* Return: 1 if prime, 0 if no prime
*/
int testing_prime(int i, int base_num)
{
	if (base_num % i == 0 || base_num < 2)
	{
		return (0);
	}
	if (i > base_num / 2)
	{
		return (1);
	}
	else
	{
		return (testing_prime(i + 1, base_num));
	}
}
/**
* is_prime_number - prints if n is prime or not
* @n: number to be checked
* Return: 1 if prime, 0 if no prime
*/
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (testing_prime(2, n));
}

