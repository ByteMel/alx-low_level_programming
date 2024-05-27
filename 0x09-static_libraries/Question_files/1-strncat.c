#include "main.h"

/**
 *_strncat - Adds to strings with n bytes from src
 *@dest: Destination
 *@src: Source
 *@n: Number of bytes from src
 *Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
