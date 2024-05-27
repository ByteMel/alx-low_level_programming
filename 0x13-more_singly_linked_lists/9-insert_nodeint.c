#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node at a given position.
 *@head: Pointer to the head element
 *@n: Value of the newnode
 *@idx: The specified index
 *
 *Return: The address of the new_node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
