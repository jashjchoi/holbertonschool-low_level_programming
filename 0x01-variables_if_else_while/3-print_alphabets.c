#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lower and uppercase
*
* Return: always 0 (if success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
