#include "lists.h"
/**
* print_listint - prints all the elements of a list_t
* @h: sll
* Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
