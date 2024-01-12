#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: double pointer to head
 * @n: data to be added
 * Return: address of newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *trav = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}

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
		while (trav->next != NULL)
		{
			trav = trav->next;
		}
		newnode->n = n;
		newnode->prev = trav;
		newnode->next = NULL;
		trav->next = newnode;
		return (newnode);

	}
}
