#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees listint.
 * @head: Pointer to head pointer of list.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	while (*head && ((*head)->next))
	{
		aux = *(head)->next;
		free(*head);
		*head = aux;
	}
	if (*head && !((*head)->next))
		free(*head);
	*head = NULL;
}
