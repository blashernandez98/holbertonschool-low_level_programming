#include "lists.h"
#include <stdlib.h>
#include "1-listint_len.c"
#include "2-add_nodeint.c"

/**
 * insert_nodeint_at_index - Insert node at nth index of intlist.
 * @head: Pointer to head pointer element.
 * @index: Index to add in.
 * @n: Int for new node.
 *
 * Return: Pointer to new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	size_t len;
	listint_t *cursor, *new;

	if (!head)
		return (NULL);
	len = listint_len(*head);
	if (len < index)
		return (NULL);

	if (index == 0)
		return (add_nodeint(head, n));

	cursor = *head;
	for (i = 0; i != index - 1; i++)
		cursor = cursor->next;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = cursor->next;
	cursor->next = new;
	return (new);
}
