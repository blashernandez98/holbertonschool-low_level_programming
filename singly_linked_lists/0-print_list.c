#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints values of singly linked list.
 * @h: Pointer to head of list.
 *
 * Return: Number of nodes in list.
 */

size_t print_list(const list_t *h)
{
	size_t res = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		res++;
		h = h->next;
	}
	return (res);
}
