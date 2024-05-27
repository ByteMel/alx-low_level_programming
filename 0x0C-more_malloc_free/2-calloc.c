#include "main.h"
#include <stdlib.h>

/**
 *_memset - Fills the memory with a constant byte
 *@s: Pointer to the memory
 *@b: The desired Value
 *@n: The number of bytes
 *Return: To the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}

/**
 *_calloc - Allocates memory to an array
 *@nmemb: The Number of elements
 *@size: Size of each elemets
 *Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
