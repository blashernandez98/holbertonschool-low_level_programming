#include "lists.h"
#include <stdlib.h>
#include "1-listint_len.c"
#include "6-pop_listint.c"

/**
 * delete_nodeint_at_index - Insert node at nth index of intlist.
 * @head: Pointer to head pointer element.
 * @index: Index to delete.
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	size_t len;
	listint_t *cursor, *aux;

	if (!head)
		return (-1);
	len = listint_len(*head);
	if (len < index)
		return (-1);

	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	cursor = *head;
	for (i = 0; i != index - 1; i++)
		cursor = cursor->next;
	aux = cursor;
	cursor = cursor->next;
	aux->next = cursor->next;
	free(cursor);

	return (1);
}
