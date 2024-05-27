#include "main.h"

/**
 *string_toupper -  changes all lowercase letters of a string to uppercase.
 *@ptr: The letters
 *Return: The Uppercase
 */

char *string_toupper(char *ptr)
{
	char *let = ptr;

	while (*let != '\0')
	{
		if (*let >= 'a' && *let <= 'z')
			*let = *let - 'a' + 'A';
		let++;
	}

	return (ptr);
}
