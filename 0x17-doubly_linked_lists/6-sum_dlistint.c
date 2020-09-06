#include "lists.h"
/**
* sum_dlistint - returns the sum of all data n of a dll
* @head: ptr to head of list
* Return: sum of all integers in a linked list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
