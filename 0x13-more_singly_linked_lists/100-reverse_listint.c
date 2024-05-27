#include "lists.h"

/**
 *reverse_listint - Reverses the listint_t linked list
 *@head: Double pointer to the head node
 *
 *Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous, *next;

	if (*head == NULL)
		return (NULL);

	current = *head;
	previous = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;

	return (*head);
}
