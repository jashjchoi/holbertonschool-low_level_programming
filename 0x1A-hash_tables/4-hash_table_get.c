#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: the hash table you want to look into
* @key: key to look for
* Return: value, or NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	if (temp == NULL)
	{
		return (NULL);
	}
	if (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
