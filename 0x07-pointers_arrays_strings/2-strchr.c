#include "main.h"

/**
 *_strchr - Locates a character in a string
 *@s: The String being used
 *@c: The character being located.
 *Return: 0
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
