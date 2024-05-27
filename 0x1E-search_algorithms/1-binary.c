#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;
	int middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = (left + right) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
			right = middle - 1;

		if (array[middle] < value)
			left = middle + 1;
	}
	return (-1);
}
