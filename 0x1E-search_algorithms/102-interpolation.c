#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right && value >= array[left] && value <= array[right])
	{
		i = left + (((double)(right - left) / (array[right] -
						array[left])) * (value - array[left]));

		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}

	printf("Value checked array[%lu] is out of range\n", left);
	return (-1);
}
