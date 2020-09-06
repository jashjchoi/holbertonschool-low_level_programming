#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dll
* @head: double ptr to head of list
* @n: value of node
* Return: ptr of added node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		if (*head)
		{
			(*head)->prev = new;
		}
		*head = new;
	}
	return (new);
}
