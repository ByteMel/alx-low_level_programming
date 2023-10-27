#include "main.h"

/**
 * wildcmp - compares two strings recursively
 * @s1: string 1
 * @s2: string 2
 *		s2 can contain the special character *
 *		The special char * can replace any string (including an empty string)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}
	}
	else if (*s1 == '\0')
		return (*s2 == '\0');

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
