#include "main.h"

/**
 *_strpbrk - Searches a string for any set of bytes
 *@s: The string being tested
 *@accept: He string used to search
 *Return: a pointer to accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
