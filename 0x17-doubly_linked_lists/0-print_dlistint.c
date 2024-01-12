#include "lists.h"

/**
 * print_dlistint - prints elements of a list
 * @h:pointer to head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;
	const dlistint_t *trav = h;

	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
		node_count++;
	}
	return (node_count);
}
