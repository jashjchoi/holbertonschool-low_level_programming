#include "hash_tables.h"
/**
* hash_table_create - create a hash table
* @size: size of the table
* Return: ptr to the new table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **head = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;

	head = malloc(sizeof(hash_node_t *) * size);
	if (head == NULL)
	{
		return (NULL);
	}
	ht->array = head;
	return (ht);
}
