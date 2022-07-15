#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees listint.
 * @head: Pointer to first element of list.
 */

void free_listint(listint_t *head)
{
	listint_t *aux = head;

	while (head && head->next)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
	if (head && !(head->next))
		free(head);
}
