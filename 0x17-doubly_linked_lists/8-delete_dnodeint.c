#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: double pointer to start of node
 * @index: index of node to delete
 * Return: 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;

	if (index == 0)
	{
		*head = cur->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}

	for (i = 0 ; i < index && cur != NULL ; i++)
		cur = cur->next;
	if (cur == NULL)
		return (-1);

	temp = cur->prev;
	temp->next = cur->next;

	if (cur->next != NULL)
		cur->next->prev = temp;
	free(cur);
	return (1);
}
