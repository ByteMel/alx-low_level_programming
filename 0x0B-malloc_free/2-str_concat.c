#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concat = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(concat + j++) = *(s1 + i);

	for (i = 0; *(s2 + i) != '\0'; i++)
		*(concat + j++) = *(s2 + i);

	return (concat);
}
