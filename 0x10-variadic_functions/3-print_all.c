#include "variadic_functions.h"
/**
* print_all - prints anything according to a list of types
* @format: list of types of arguments
* Return: 0
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list list_of_format;
	char *string, *sep = "";

	va_start(list_of_format, format);
	sep = ", ";
	while (format != NULL && format[i] != '\0')
	{
		if (i == strlen(format) - 1)
		{
			sep = "";
		}
		switch (format[i])
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
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(list_of_format);
}
