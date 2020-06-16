#include <stdio.h>
/**
* main - prints all cominations of 2 two-digit num
*
* Return: Always 0
*/
int main(void)
{
	int first_num;
	int second_num;
	int ascii_0 = '0';

	for (first_num = 0; first_num <= 98; first_num++)
	{
		for (second_num = first_num + 1; second_num <= 99; second_num++)
		{
			putchar(first_num / 10 + ascii_0);
			putchar(first_num % 10 + ascii_0);

			putchar(' ');

			putchar(second_num / 10 + ascii_0);
			putchar(second_num % 10 + ascii_0);

			if (first_num < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
