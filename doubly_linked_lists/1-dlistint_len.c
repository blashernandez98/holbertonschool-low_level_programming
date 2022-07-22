#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - Function that calculates length of a dlistint_t list.
 * @h: Pointer to first node of list.
 *
 * Return: Number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t res = 0;

	while (h)
	{
		h = h->next;
		res++;
	}

	return (res);
}
