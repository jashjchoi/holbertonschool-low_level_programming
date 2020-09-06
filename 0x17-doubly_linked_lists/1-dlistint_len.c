#include "lists.h"
/**
* dlistint_len - the number of elements in a linked list
* @h: ptr to head of list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
