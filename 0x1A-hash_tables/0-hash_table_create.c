#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: the size of the array
* Return: ptr to newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int index;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		return (NULL);
	}
	while (index < size)
	{
		new_table->array[index] = NULL;
		index++;
	}
	return (new_table);
}
