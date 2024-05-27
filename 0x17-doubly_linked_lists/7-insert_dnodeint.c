#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @n: value of the new node
 * @idx: index of the node
 *
 * Return: address of the new element
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tmp = *h;

	if (idx == 0)
	{
		new->n = n;
		new->next = tmp;
		new->prev = NULL;
		if (tmp != NULL)
			tmp->prev = new;
		*h = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = new;

	tmp->next = new;
	return (new);
}
