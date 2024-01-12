#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to head
 * @idx: index to apply new node
 * @n: data of new node
 * Return: newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h;
	dlistint_t *newnode  = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = cur;
		if (cur != NULL)
		{
			cur->prev = newnode;
		}
		*h = newnode;
		return (newnode);
	}
	for (i = 0 ; i < idx - 1 && cur != NULL ; i++)
		cur = cur->next;
	if (i < idx - 1)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = cur->next;
	if (cur->next != NULL)
	{
		cur->next->prev = newnode;
	}
	newnode->prev = cur;
	cur->next = newnode;

	return (newnode);
}
