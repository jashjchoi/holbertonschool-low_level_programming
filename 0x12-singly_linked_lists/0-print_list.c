#include "lists.h"
/**
* print_list - prints all the elements of a list_t
* @h: sll
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
		}
	}
	return (i);
}
