#include "lists.h"

/**
 *list_len - Finds the number of elements in list_t
 *@h: Pointer to the head of list_t
 *
 *Return: The number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
