#include "lists.h"
#include <string.h>

/**
 *_strlen - Returns the length of a string
 *@s: The string being used
 *Return: Returns the length of the string
 */

int _strlen(const char *s)
{
	unsigned int len = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		len += sizeof(char);

	return (len);
}

/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: Head of the list_t
 *@str: Pointer to the value to insert in the new element
 *
 *Return: The address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	new_node->len = _strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
