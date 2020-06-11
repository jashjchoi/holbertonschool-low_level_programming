#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase
*
* Return: always 0 (success)
*/
int main(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
		putchar(lowCase);
		putchar('\n');
	}
	return (0);
}
