#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size for hash table.
 *
 * Return: Pointer to new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new->array))
		return (NULL);
	return (new);
}
