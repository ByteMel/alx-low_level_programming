#include "main.h"

/**
 * _strncat - concatenates two strings with n bytes from src
 * @dest: destination
 * @src: source
 * @n: number of bytes from src
 *
 * Return: dest (pointer to dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
