#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		new->len = strlen(new->str);
		new->next = *head;
		*head = *new;
	}
	return (new);
}
