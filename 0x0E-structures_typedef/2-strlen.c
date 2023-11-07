#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	unsigned int len = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		len += sizeof(char);

	return (len);
}
