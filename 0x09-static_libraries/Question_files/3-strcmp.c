#include "main.h"

/**
 *_strcmp - Compares two strings
 *@s1: The first String
 *@s2: The second string
 *Return: The difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
