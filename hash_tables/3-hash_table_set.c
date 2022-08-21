#include "hash_tables.h"

/**
 * hash_table_set - Adds new element to a hash table.
 * @ht: Pointer to hash table.
 * @key: Key string.
 * @value: Value associated with key.
 *
 * Return: 1 on success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **location = NULL, *new = NULL;

	if (ht && key)
	{
		index = key_index(key, ht->size);
		location = (ht->array);
		location += index;
		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		if (!(new->value) || !(new->key))
			return (0);

		if (*location != NULL)
		{
			new->next = *location;
			*location = new;
		}
		else
			*location = new;	
	}
	return (0);
}
