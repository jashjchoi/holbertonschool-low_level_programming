#include "lists.h"
/**
* get_dnodeint_at_index - nth node of a dll
* @head: head ptr to linked list
* @index: nth node to get node
* Return: nth node, or NULL if the node doesn't exsit
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index != 0)
	{
		head = head->next;
		index--;
	}
	if (head && index == 0)
	{
		return (head);
	}
	return (NULL);
}
