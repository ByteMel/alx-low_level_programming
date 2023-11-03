#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers between min and max
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *arr, i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	arr = malloc(n * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		*(arr + i) = min++;

	return (arr);

}
