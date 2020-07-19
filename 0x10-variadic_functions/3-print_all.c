#include "variadic_functions.h"
/**
* print_all - prints anything according to a list of types
* @format: list of types of arguments
* Return: 0
*/
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list list_of_format;
	char *string, *sep = "";

	va_start(list_of_format, format);
	sep = ", ";
	while (format != NULL && format[i] != '\0')
	{
		i++;
	}
	while (format && format[j])
	{
		if (j == (i - 1))
		{
			sep = "";
		}
		switch (format[j])
		{
			case 'c':
				printf("%c%s", va_arg(list_of_format, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(list_of_format, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(list_of_format, double), sep);
				break;
			case 's':
				string = va_arg(list_of_format, char *);
				if (string == NULL)
				{
					string = "(nil)";
				}
				printf("%s%s", string, sep);
				break;
			default:
				j++;
				continue;
		}
		j++;
	}
	printf("\n");
	va_end(list_of_format);
}
