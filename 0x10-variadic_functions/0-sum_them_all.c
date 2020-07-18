#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - prints the sum of all given element
* @n: number of elements
* Return: output of sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum_output = 0;
	unsigned int i;
	va_list list_of_vars;

	va_start(list_of_vars, n);
	for (i = 0; i < n; i++)
	{
		sum_output += va_arg(list_of_vars, int);
	}
	va_end(list_of_vars);
	return (sum_output);
}
