#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes first node of listint.
 * @head: Pointer to head pointer of list.
 *
 * Return: Int value in deleted node.
 */

int pop_listint(listint_t **head)
{
	int res = 0;

	if (head && *head)
	{
		listint_t *aux = *head;

		*head = aux->next;
		res = aux->n;
		free(aux);
	}
	return (res);
}
