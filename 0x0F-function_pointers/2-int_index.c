#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - Searches for an integer in an array
 *@array: Pointer to the array being iterated
 *@size: The size of the array
 *@cmp: Pointer to a function that takes an integer as a parameter
 *Return: The index of the first element that does not return 0
 * or -1 if there's no match or if size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
