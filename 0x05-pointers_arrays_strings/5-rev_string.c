#include "main.h"

/**
 *rev_string - reverses a string
 *@s: String being used
 *
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		length++;
		end++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
