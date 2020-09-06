#include "lists.h"
/**
* add_dnodeint_end - add a new node at the end of dll
* @head: ptr to head of list
* @n: int value of node
* Return: ptr to added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;


	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp && tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
