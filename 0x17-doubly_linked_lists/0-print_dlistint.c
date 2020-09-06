#include "lists.h"
/**
* print_dlistint - prints all elements of a dll
* @h: ptr to head of list
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter++);
}
