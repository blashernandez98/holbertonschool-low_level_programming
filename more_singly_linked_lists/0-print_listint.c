#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints list of ints.
 * @head: Pointer to first node.
 * 
 * Return: Size of list.
 */

size_t print_listint(const listint_t *head)
{
	size_t size = 0;

	while (head)
	{
		printf("%d\n", head->n);
		size++;
		head = head->next;
	}
	return (size);
}
