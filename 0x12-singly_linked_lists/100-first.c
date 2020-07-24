#include <stdio.h>
void __attribute__ ((constructor)) first_func(void);
/**
* first_func - prints str before main function is executed
* Return: void
*/
void first_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
