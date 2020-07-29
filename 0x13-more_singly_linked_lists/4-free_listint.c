#include "lists.h"
/**
* free_listint - frees a listint_t
* @head: pointer to head of sll
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current_ptr;

	if (head == NULL)
	{
		free(head);
		return;
	}
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			current_ptr = head->next;
			free(head);
			head = current_ptr;
		}
		free(head);
	}
}
