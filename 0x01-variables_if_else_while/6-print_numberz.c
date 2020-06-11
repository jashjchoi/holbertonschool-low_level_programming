#include <stdio.h>
/**
* main - Entry point
*
* Description: prints numbers in base 10 without char
*
* Return: Always 0 (If succecss)
*/
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
