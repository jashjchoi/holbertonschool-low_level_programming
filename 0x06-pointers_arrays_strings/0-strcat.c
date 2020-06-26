#include "hoblerton.h"
/**
* _strcat - concatenates 2 str
*
* @dest: pointer to dest str
*
* @src: pointer to src str
*
* Return: pointer to modified dest str
*/
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
