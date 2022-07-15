#include "lists.h"

/**
 * sum_listint - Sums all the data in nodes of listint.
 * @head: Pointer to first node.
 *
 * Return: Sum of all data in nodes.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
