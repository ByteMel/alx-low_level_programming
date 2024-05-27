#include "search_algos.h"

/**
 * binary_search_recursive - Recursively searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @left: Left boundary of the search range
 * @right: Right boundary of the search range
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t middle, i;

	if (left > right)
		return (-1);

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
	{
		if (middle == left || array[middle - 1] != value)
			return (middle);
		else
			return (binary_search_recursive(array, left, middle, value));
	}
	else if (array[middle] > value)
		return (binary_search_recursive(array, left, middle - 1, value));
	else
		return (binary_search_recursive(array, middle + 1, right, value));
}

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
