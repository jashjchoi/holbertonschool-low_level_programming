#include "lists.h"
/**
* free_list - frees a list_t
* @head: head of sll
* Return: void
*/
void free_list(list_t *head)
{
	list_t *current_ptr;

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
			free(head->str);
			free(head);
			head = current_ptr;
		}
		free(head->str);
		free(head);
	}
}
