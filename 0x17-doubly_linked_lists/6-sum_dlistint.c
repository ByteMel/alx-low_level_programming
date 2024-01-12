#include "lists.h"
/**
 * sum_dlistint - find sum of data
 * @head: pointer to head of list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	int tot = 0;

	while (cur != NULL)
	{
		tot += cur->n;
		cur = cur->next;
	}
	return (tot);
}
