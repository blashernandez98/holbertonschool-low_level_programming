#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Calculates number of nodes in listint.
 * @head: Pointer to first node.
 *
 * Return: Size of list.
 */

size_t listint_len(const listint_t *head)
{
	size_t size = 0;

	while (head)
	{
		size++;
		head = head->next;
	}
	return (size);
}
