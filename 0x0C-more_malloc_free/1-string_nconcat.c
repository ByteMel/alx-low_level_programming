#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings with part of another
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, size = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i); i++)
		size++;

	string = malloc(sizeof(char) * (size + 1));

	if (string == NULL)
		return (NULL);

	size = 0;

	for (i = 0; *(s1 + i); i++)
		string[size++] = *(s1 + i);

	for (i = 0; *(s2 + i) && i < n; i++)
		string[size++] = *(s2 + i);

	string[size] = '\0';

	return (string);
}
