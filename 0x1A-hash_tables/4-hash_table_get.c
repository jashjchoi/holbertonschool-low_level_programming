#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: the hash table you want to look into
* @key: key to look for
* Return: value, or NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if (key == NULL)
	{
		return (NULL);
	}
	if (ht != NULL)
	{
		index = key_index((const unsigned char *)key, ht->size);
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				return (temp->value);
			}
			temp = temp->next;
		}
	}
	return (NULL);
}
