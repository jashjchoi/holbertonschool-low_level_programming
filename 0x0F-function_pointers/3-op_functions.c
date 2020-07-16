#include "3-calc.h"
/**
 * op_add - returns the sum of a and b 
 * @a: first number
 * @b: second number 
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - returns the difference of a and b
* @a: first number
* @b: second number
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - returns product of a and b
* @a: first number
* @b: second number
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
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("0\n");
	}
	return (a % b);
}
