#include "search_algos.h"

/**
 * _binary_search - searches for a value in an array of integers using Binary
 * Search
 * @array: array of integers
 * @left: left index
 * @right: right index
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i, middle;

	while (left <= right)
	{
		middle = left + ((right - left) / 2);

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (_binary_search(array, left, right, value));
}
