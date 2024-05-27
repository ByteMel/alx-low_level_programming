#include "lists.h"

/**
 *print_listint_safe - Prints a listint_t linked list
 *@head: A pointer to the head of the list
 *
 *Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		head = head->next;
		count++;
	}

	return (count);
}
