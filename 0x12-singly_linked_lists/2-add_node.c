#include "lists.h"
/**
* add_node -  adds a new node at the beginning of a list_t
* @head: head of sll
* @str: str to be added to sll
* Return: address of head
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new;

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

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; new->str[i] != '\0'; i++)
	{
		;
	}
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
