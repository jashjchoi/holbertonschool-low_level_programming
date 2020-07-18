#include "variadic_functions.h"
/**
* print_strings - prints given strings, followed by new line
* @separator: str to be printed between strings
* @n: number of strings to be printed
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list_of_vars;

	va_start(list_of_vars, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list_of_vars, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		if (i < (n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
		else if (str == NULL)
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(list_of_vars);
}
