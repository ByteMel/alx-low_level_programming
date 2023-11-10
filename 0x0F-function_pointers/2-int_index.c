#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function that takes int arg and returns int
 *
 * Return: index of first element for which cmp function does not return 0
 *		-1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
