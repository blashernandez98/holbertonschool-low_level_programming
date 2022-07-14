#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds node at beggining of listint_t.
 * @head: Pointer to head pointer.
 * @n: Int for new node.
 *
 * Return: Adress of new node or NULL if fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
