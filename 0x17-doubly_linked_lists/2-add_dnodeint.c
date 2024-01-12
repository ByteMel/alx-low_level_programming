#include "lists.h"
/**
 * add_dnodeint - adds node at end of list
 * @head: ponter to head
 * @n: data to add
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *trav = *head;

	if (newnode == NULL)
		return (NULL);

	if (trav == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (*head);
	}
	else
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = trav;
		trav->prev = newnode;
		*head = newnode;
		return (*head);
	}
}
