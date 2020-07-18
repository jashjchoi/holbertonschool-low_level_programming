#include "variadic_functions.h"
/**
* print_numbers - prints given numbers, followed by new line
* @separator: str to be printed between numbers
* @n: number of numbers to be printed
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list list_of_vars;

	va_start(list_of_vars, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(list_of_vars, int);
		printf("%d", number);
		if (i < (n - 1))
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(list_of_vars);
}
