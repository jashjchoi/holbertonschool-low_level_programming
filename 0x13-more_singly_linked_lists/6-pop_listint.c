#include "lists.h"
/**
* pop_listint - deletes the head node of listint_t
* @head: pointer to the address of head of sll
* Return: head node, 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	int i;

	listint_t *new_h;

	if (*head == NULL)
	{
		return (0);
	}
	if (*head != NULL)
	{
		i = (*head)->n;
		new_h = (*head)->next;
		free(*head);
		*head = new_h;
	}
	return (i);
}
