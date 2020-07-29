#include "lists.h"
/**
* free_listint2 - free listint_t
* @head: pointer to the location of head pointer of sll
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current_ptr;

	if (head == NULL)
	{
		return;
	}
	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current_ptr = (*head)->next;
		free(*head);
		*head = current_ptr;
	}
	free(*head);
	*head = NULL;
}
