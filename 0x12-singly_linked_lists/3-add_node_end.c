#include "lists.h"
/**
* add_node_end -  adds a new node at the end of a list_t
* @head: head of sll
* @str: input str to be stored in sll
* Return: address of head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *dup_h;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	for (i = 0; new->str[i] != '\0'; i++)
	{
		;
	}
	new->len = i;
	new->next = NULL;
	dup_h = *head;

	if (dup_h == NULL)
	{
		*head = new;
	}
	else
	{
		while (dup_h->next != NULL)
		{
			dup_h = dup_h->next;
		}
		dup_h->next = new;
	}
	return (new);
}
