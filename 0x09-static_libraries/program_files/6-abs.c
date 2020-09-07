#include <stdio.h>
#include "holberton.h"
/**
* _abs - computes the abs. value
*
* @i: integer to test
*
* Return: abs. value
*/
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
	{
		return (i);
	}
}
