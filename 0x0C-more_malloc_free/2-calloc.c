#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory using malloc
 * @nmemb: size of the array
 * @size: byte size of each element of the array
 *
 * Return: 0 if nmemb or size is 0 or the function fails - NULL
 *		otherwise - pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	s = p;

	while (i < (size * nmemb))
	{
		s[i] = '\0';
		i++;
	}

	return (p);
}
