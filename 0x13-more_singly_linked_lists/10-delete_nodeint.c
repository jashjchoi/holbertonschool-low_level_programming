#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index of sll
* @head: head of sll
* @index: index to delete the node
* Return: 1 if success, -1 if fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *tmp_h = *head, *tmp_node;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp_h);
		return (1);
	}
	for (node = 0; node < index - 1; node++)
	{
		if (tmp_h->next == NULL)
		{
			return (-1);
		}
		tmp_h = tmp_h->next;
	}
	tmp_node = tmp_h->next;
	tmp_h->next = tmp_node->next;
	free(tmp_node);
	return (1);
}
