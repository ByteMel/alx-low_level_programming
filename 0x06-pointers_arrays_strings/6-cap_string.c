#include "main.h"

/**
 *cap_string - Capitalizes all words of a string
 *@s: String to be Capitalized
 *Return: s
 */

char *cap_string(char *s)
{
	int i = 0, flag = 1;

	for (; *(s + i) != '\0'; i++)
	{
		if (
				s[i] == 32 || s[i] == 9 || s[i] == 10 ||
				s[i] == 44 || s[i] == 59 || s[i] == 46 ||
				s[i] == 33 || s[i] == 63 || s[i] == '"' ||
				s[i] == 40 || s[i] == 41 ||
				s[i] == 123 || s[i] == 125
			)

			flag = 1;
		else if (flag)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 'a' + 'A';

			flag = 0;
		}
	}

	return (s);
}
