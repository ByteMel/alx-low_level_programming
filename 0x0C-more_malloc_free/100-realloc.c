#include "main.h"
#include <stdlib.h>

/**
 *_memcpy - Copies memory Area
 *@dest: Destination
 *@src: Source
 *@n: Number of Bytes
 *Return: dets(Destination)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: a pointer to the memory previously allocated
 *@old_size: The old size
 *@new_size: The new size
 *Return: A pointer to the new mem
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	_memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);

}
