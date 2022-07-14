#include "lists.h"
#include <stdlib.h>

/**
 * free_node - Frees memory for node of list_t
 * @node: Pointer to node.
 */

void free_node(list_t *node)
{
	if (node->str)
		free(node->str);
	free(node);
}


/**
 * free_list - Frees memory allocated for a list.
 * @head: Pointer to first element.
 */

void free_list(list_t *head)
{
	list_t *cursor = head;

	while (head && head->next)
	{
		cursor = head->next;
		free_node(head);
		head = cursor;
	}
	if (head)
		free_node(head);
}
