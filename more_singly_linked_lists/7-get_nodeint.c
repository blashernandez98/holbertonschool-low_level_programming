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
	if (!head)
		return (NULL);
	unsigned int i = 0;

	for (; i < index; i++)
		head = head->next;
	return (head);
}
