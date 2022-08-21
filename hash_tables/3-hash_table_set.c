#include "hash_tables.h"
#include <string.h>

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
	char *key_cp, *value_cp;

	if (ht && key)
	{
		key_cp = strdup(key);
		if (!(key_cp))
			return (0);
		value_cp = strdup(value);
		if (!(value_cp))
			return (0);

		index = key_index((unsigned char *) key_cp, ht->size);
		location = (ht->array);
		location += index;

		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);
		new->key = key_cp;
		new->value = value_cp;
		new->next = NULL;

		if (*location != NULL)
		{
			new->next = *location;
			*location = new;
		}
		else
			*location = new;
	}
	return (1);
}
