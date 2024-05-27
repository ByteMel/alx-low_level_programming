#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: A pointer to the head element of the lists
 *
 *Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	int j;
	listint_t *next;

	if (*head == NULL)
		return (0);

	j = (*head)->n;
	next = (*head)->next;

	free(*head);
	*head = next;

	return (j);
}
