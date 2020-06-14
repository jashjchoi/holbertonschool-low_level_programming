#include <stdio.h>
/**
* main - prints diff comb of 3 digits
*
* Return: always 0 (if success)
*/
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 48; first <= 55; first++)
	{
		for (second = first + 1; second <= 56; second++)
		{
			for (third = second + 1; third <= 57; third++)
			{
				if (first < second && second < third)
				{
					putchar(first);
					putchar(second);
					putchar(third);

					if (first < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
