#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees listint.
 * @head: Pointer to head pointer of list.
 */

void free_listint2(listint_t **head)
{
	if (head)
	{
		listint_t *cursor = *head;
		listint_t *aux = cursor;

		while (cursor && cursor->next)
		{
			aux = cursor->next;
			free(cursor);
			cursor = aux;
		}
		if (cursor)
			free(cursor);
		*head = NULL;
	}
}
