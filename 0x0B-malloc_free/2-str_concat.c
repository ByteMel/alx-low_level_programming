#include "main.h"
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
 *_strcat - adds to strings
 *@dest: destination
 *@src: source
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 *str_concat - Concatenates two strings
 *@s1: The first string
 *@s2: The second string
 *Return: A pointer that contains s1, s2 followed with a null
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	conc = malloc((len1 + len2 + 1) * sizeof(char));

	if (conc == NULL)
		return (NULL);

	_strcpy(conc, s1);
	_strcat(conc, s2);

	return (conc);
}
