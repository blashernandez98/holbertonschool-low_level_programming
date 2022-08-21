#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **cursor = NULL, *list = NULL;
	unsigned long int i;

	printf("{");
	if (ht)
	{
		cursor = ht->array;

		for (i = 0; i < ht->size; i++)
		{
			list = cursor[i];
			while (list)
			{
				printf("'%s': '%s'", list->key, list->value);
				if (list->next)
					printf(", ");
				list = list->next;
			}
		}
	}
	printf("}\n");
}
