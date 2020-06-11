#include <stdio.h>
/**
* main - Entry point
*
* Description: prints lowercase alphabet in reverse
*
* Return: Always 0 (if success)
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
