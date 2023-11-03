#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to the memory
 * @old_size: old size of the memory
 * @new_size: new size of the memory
 *
 * Return: pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	char *cp_ptr, *buffer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		return (new_mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	cp_ptr = ptr;
	new_mem = malloc(sizeof(*cp_ptr) * new_size);

	if (new_mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	buffer = new_mem;

	for (i = 0; i < old_size && i < new_size; i++)
		*(buffer + i) = *cp_ptr++;

	free(ptr);

	return (new_mem);
}
