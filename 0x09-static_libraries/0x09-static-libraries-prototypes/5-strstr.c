#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to match
 *
 * Return: A pointer to the first occurrence of needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	do {
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;

	} while (*haystack);

	return ('\0');
}
