#include "lists.h"

/**
 * get_nodeint_at_index - Get int at nth index of intlist.
 * @head: Pointer to first element.
 * @index: Index wanted.
 *
 * Return: Pointer to index node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index && head->next; i++)
		head = head->next;
	if (i == index)
		return (head);
	else
		return (NULL);
}
