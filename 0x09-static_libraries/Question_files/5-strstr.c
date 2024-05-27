#include "main.h"

/**
 *_strstr - Locates a substring in a string
 *@haystack: The string being tested
 *@needle: The string being searched
 *Return: a pointer to the beginning of the located substring, or NULL
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
