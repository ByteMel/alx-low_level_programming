#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to fill the array
 *
 * Return: pointer to the array
 */



char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size);
	if (array == NULL)
		return (NULL);

	for (; i < size; i++)
		array[i] = c;

	/* free(array); */

	return (array);
}
