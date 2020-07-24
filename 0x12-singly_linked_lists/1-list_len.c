#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t
 * @h: sll
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
