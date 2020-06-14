#include <stdio.h>
/**
* main - print different combinations
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
			if (second > first)
			{
				putchar(first);
				putchar(second);

				if (first < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return ('0');
}
