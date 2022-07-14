#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds new node at the end of listint.
 * @head: Pointer to head of list.
 * @n: Int for new node.
 *
 * Return: Adress of new node or NULL if fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *cursor = *head;

	if (new)
	{
		new->n = n;
		new->next = NULL;
		while (cursor && cursor->next)
			cursor = cursor->next;
		if (cursor)
			cursor->next = new;
		else
			*head = new;
	}
	return (new);
}
