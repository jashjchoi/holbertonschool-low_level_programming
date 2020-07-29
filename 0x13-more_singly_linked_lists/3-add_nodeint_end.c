#include "lists.h"
/**
* add_nodeint_end -  adds a new node at the end of a list_t
* @head: head of sll
* @n: value of node that is added to list
* Return: address of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *copy_h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		copy_h = *head;
		while (copy_h->next != NULL)
		{
			copy_h = copy_h->next;
		}
		copy_h->next = new;
	}
	return (*head);
}
