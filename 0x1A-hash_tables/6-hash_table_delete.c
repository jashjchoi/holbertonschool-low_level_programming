#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
* @ht: table to delete
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL; 
	hash_node_t *new_temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL)
	{
		return;
	}
	while (index < ht->size)
	{
		new_temp = ht->array[index];
		while (temp)
		{
			temp = new_temp;
			new_temp = new_temp->next;
			if (temp->key != NULL)
				free(temp->key);
			if (temp->value != NULL)
				free(temp->value);
			free(temp);
		}
		free(ht->array[index]);
		index++;
	}
	free(ht->array);
	free(ht);
}
