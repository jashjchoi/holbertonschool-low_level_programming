#include "lists.h"
/**
* listint_len - number of the elements of a listint_t
* @h: sll
* Return: number of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
