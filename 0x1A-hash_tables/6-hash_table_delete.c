#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
* @ht: table to delete
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;

	if (ht == NULL)
	{
		return;
	}
	while (index < ht->size)
	{
		free_table(ht->array[index]);
		index++;
	}
	free(ht->array);
	free(ht);
}
/**
* free_table - recursive function to delete and free the table
* head: hash table to be deleted
* Return: void
*/
void free_table(hash_node_t *head)
{
	hash_node_t *head_ptr = NULL;

	if (head)
	{
		while (head)
		{
			head_ptr = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = head_ptr;
		}
	}
}
