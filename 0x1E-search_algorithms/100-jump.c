#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, i, j;

	if (array == NULL)
		return (-1);

	step = sqrt(size);

	for (i = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		i = j;
		j += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);

	j = j < size - 1 ? j : size - 1;

	for (; i <= j && array[i] < value; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
