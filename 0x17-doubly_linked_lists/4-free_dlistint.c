#include "lists.h"
/**
* free_dlistint - free all nodes of dll
* @head: ptr to head of list
*
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
	{
		return;
	}
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
