#include "lists.h"
#include <stdlib.h>

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
		free(head);
		head = cursor;
	}
	if (head)
		free(head);
}
