#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to the begining of list
 * @index: index of node at nth
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *cur = head;

	for (i = 0 ; cur != NULL && i < index ; i++)
	{
		cur = cur->next;
	}
	return (cur);
}
