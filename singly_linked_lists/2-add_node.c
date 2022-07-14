#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds node to linked list.
 * @head: Pointer to head pointer of list.
 * @str: String to store in new node.
 *
 * Return: Pointer to new node if succesful, NULL otherwise.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *strd = strdup(str);

	if (new && strd)
	{
		new->str = strd;
		new->len = strlen(new->str);
		new->next = *head;
		*head = new;
	}
	else if (!strd && new)
		free(new);
	else if (!new && strd)
		free(strd);
	return (new);
}
