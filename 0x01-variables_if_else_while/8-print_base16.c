#include <stdio.h>
/**
* main - Entry point
*
* Description: prints numbers of base 16 in lowercase
*
* Return: Always 0 (if success)
*/
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
