#include "lists.h"
/**
* get_nodeint_at_index - the nth node of a listint_t
* @head: pointer to head of the sll
* @index: index of the node to be printed
* Return: pointer to nth node of sll
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	if (head != NULL)
	{
		for (node = 0; node < index; node++)
		{
			head = head->next;
		}
		return (head);
	}
	else
	{
		return (NULL);
	}
}
