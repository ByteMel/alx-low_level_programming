#include "lists.h"

/**
 * sum_dlistint - prints all the elements of a list
 * @head: head of the list
 *
 * Return: number of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		nodes += head->n;
		head = head->next;
	}

	return (nodes);
}
