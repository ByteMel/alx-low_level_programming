#include "lists.h"

/**
 * dlistint_len - prints the number of elements
 * @h: pointer to head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_count = 0;
	const dlistint_t *trav = h;

	while (trav != NULL)
	{
		elem_count++;
		trav = trav->next;
	}
	return (elem_count);
}
