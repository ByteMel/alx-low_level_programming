#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - Returns the length of a string
 *@s: The string being used
 *Return: Returns the length of the string
 */

int _strlen(char *s)
{
	unsigned int len = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		len += sizeof(char);

	return (len);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 *
* Return: dest/copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


/**
 *_strdup - Copies a String given as a parameter
 *@str: The string to be copied
 *Return: A pointer to the new string on Success
 */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc(_strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	_strcpy(dup, str);

	return (dup);
}
