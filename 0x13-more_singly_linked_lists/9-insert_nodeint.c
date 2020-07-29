#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the address of head of sll
* @idx: index where new node is printed
* @n: given int value
* Return: the list including the new node at given idx
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new, *copy_h;

	copy_h = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = copy_h;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy_h == NULL)
		{
			free(new);
			return (NULL);
		}
		copy_h = copy_h->next;
	}
	new->next = copy_h->next;
	copy_h->next = new;
	return (new);
}
