#include "dog.h"

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
