#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds node at end of linked list.
 * @head: Pointer to head pointer of list.
 * @str: String for new node.
 *
 * Return: Adress of new element or NULL if fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strd = strdup(str);
	list_t *new;

	if (strd)
	{
		new = malloc(sizeof(list_t));
		if (new)
		{
			new->str = strd;
			new->len = strlen(strd);
			new->next = NULL;
			while ((*head)->next)
				*head = (*head)->next;
			(*head)->next = new;
		}
		else
			free(strd);
	}
	return (new);
}
