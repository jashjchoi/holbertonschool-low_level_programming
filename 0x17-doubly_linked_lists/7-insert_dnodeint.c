#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: ptr to header of dll
* @idx: index to insert the new node
* @n: value of the new node
* Return: address of the newly inserted node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;

	if (!h)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	current = *h;

	while (idx > 1 && current && current->next)
	{
		current = current->next;
		idx--;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx > 1 || current == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (current->next != NULL)
	{
		current->next->prev = new;
	}
	new->prev = current;
	new->next = current->next;
	current->next = new;

	return (new);
}
