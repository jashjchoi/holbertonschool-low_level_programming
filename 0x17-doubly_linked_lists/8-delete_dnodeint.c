#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index of a dll
* @head: ptr to head of list
* @index: index of the node that should be deleted
* Return: 1 if success, -1 if fails
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!*head)
	{
		return (-1);
	}
	if (head)
	{
		while (index && current)
		{
			current = current->next;
			index--;
		}
		if (index)
		{
			return (-1);
		}
		if (!index && current)
		{
			if (current->next)
			{
				current->next->prev = current->prev;
			}
			if (current->prev)
			{
				current->prev->next = current->next;
			}
			else
			{
				*head = current->next;
			}
			free(current);
			return (1);
		}
	}
	return (-1);
}
