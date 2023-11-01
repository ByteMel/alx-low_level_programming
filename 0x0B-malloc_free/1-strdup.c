#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * of an array of chars
 * @str: string to be copied
 *
 * Return: a pointer to the newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);

	dup = malloc(_strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		dup[i] = str[i];

	return (dup);
}
