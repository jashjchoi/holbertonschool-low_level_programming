#include <stdio.h>
/**
* main - print first 50 fibonacci num
*
* Return: 0
*/
int main(void)
{
	int f1 = 0;
	int f2 = 1;
	int i;
	int sum;

	for (i = 1; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%d", sum);
		f1 = f2;
		f2 = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
