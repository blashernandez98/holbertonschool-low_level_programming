#include <stdio.h>
#include "lists.h"

/**
 * list_len - Calculates length of singly linked list.
 * @h: Pointer to head of list.
 *
 * Return: Number of nodes in list.
 */

size_t list_len(const list_t *h)
{
	size_t res = 0;

	while (h)
	{
		res++;
		h = h->next;
	}
	return (res);
}
