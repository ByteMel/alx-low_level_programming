#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of
 *            any of the bytes in the string accept
 * @s: The string to search
 * @accept: The string to match
 *
 * Return: A pointer to the first occurrence of c in s, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
			if (*s == *(accept + i))
				return (s);
		s++;
	}

	return ('\0');
}
