#include "3-calc.h"
/**
* op_add - the sum of a and b
* @a: first number
* @b: second number
* Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - the difference of a and b
* @a: first number
* @b: second number
* Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - product of a and b
* @a: first number
* @b: second number
* Return: a * b, 0 if b is 0
*/
int op_mul(int a, int b)
{
	if (b == 0)
	{
		printf("0\n");
	}
	return (a * b);
}
/**
* op_div - returns the division of a by b
* @a: first number
* @b: second number
* Return: a / b, 0 if b is 0
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("0\n");
	}
	return (a / b);
}
/**
* op_mod - returns the remainder of the division of a by b
* @a: first number
* @b: second number
* Return: a % b, 0 if b is 0
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("0\n");
	}
	return (a % b);
}
