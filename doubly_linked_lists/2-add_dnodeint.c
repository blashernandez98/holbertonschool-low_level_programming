#include "lists.h"
#include <stddef.h>

/**
 * add_dnodeint - Adds node to a dlistint list at the start.
 * @head: Pointer to pointer of first node.
 * @n: Data for new node.
 *
 * Return: Pointer to new node or NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->prev = NULL;
		new->n = n;

		if (*head)
		{
			*head->prev = new;
			new->next = *head;
		}
		*head = new;
	}
	return (new);
}
