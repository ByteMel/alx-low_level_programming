#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates an array of chars, initialized with a specified char
 *@size: Size of the array
 *@c: The initialized char
 *Return: A pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
