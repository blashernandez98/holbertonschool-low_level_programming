#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with key in a hash table.
 * @ht: Pointer to hash table.
 * @key: Key to search for.
 *
 * Return: Value associated with key or NULL if not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **location = NULL, *node = NULL;
	char *key_cp;

	if (ht && key)
	{
		key_cp = strdup(key);
		index = key_index((unsigned char *) key_cp, ht->size);
		location = ht->array;
		location += index;

		if (*location == NULL)
		{
			free(key_cp);
			return (NULL);
		}
		node = (search_key(key_cp, *location));
		if (node)
		{
			free(key_cp);
			return (node->value);
		}
		free(key_cp);
	}
	return (NULL);
}
