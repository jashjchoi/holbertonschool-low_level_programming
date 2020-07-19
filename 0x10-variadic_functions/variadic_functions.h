#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
* struct print_vars - print struct type within function
* @t_vars: print variable type
* @f: print function
*/
typedef struct print_vars
{
	char *t_vars;
	void (*f)(va_list);
} print_vars_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
