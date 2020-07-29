#include "lists.h"
/**
* sum_listint - returns the sum of all data (n) of a listint_t
* @head: pointer to the header of sll
* Return: the sum of sll, or 0 if fails
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *copy_h;

	copy_h = head;

	while (copy_h == NULL)
	{
		return (0);
	}
	while (copy_h != NULL)
	{
		sum += copy_h->n;
		copy_h = copy_h->next;
	}
	return (sum);
}
