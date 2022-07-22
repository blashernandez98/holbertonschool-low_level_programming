#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: Pointer to first node of list.
 *
 * Return: Number of elements printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t res = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		res++;
	}

	return (res);
}
