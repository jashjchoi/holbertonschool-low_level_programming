#include <stdio.h>
/**
* main - print 00 to 99
*
* Return: always 0 (if success)
*/
int main(void)
{
	int first;
	int second;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{
			putchar(first);
			putchar(second);

			if (first < 57 || second < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
