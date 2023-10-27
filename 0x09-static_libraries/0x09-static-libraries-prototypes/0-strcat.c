#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: dest (pointer to dest)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
