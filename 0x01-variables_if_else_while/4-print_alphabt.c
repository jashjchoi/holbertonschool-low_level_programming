#include <stdio.h>
/**
* main - Entry point
*
* Description: prints the alphabet in lowercase without e and q
*
* Return: always 0 (if success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
