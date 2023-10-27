#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to be located
 *
 * Return: A pointer to the first occurrence of c, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
