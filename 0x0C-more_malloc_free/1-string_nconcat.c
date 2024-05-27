#include "main.h"
#include <stdlib.h>

/**
 *_strlen - Returns the length of a string
 *@s: The string being used
 *Return: Returns the length of the string
 */

int _strlen(char *s)
{
	unsigned int len = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		len += sizeof(char);

	return (len);
}

/**
 *_memcpy - Copies memory Area
 *@dest: Destination
 *@src: Source
 *@n: Number of Bytes
 *Return: dets(Destination)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 *string_nconcat - Concatenates two strings
 *@s1: The first string
 *@s2: The second string
 *@n: The estimated length of s2
 *Return: A pointer to the allocated space of the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	conc = malloc(len1 + n + 1);

	if (conc == NULL)
		return (NULL);

	_memcpy(conc, s1, len1);
	_memcpy(conc + len1, s2, n);

	conc[len1 + n] = '\0';

	return (conc);
}
