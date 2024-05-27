#include "main.h"
#include <stdlib.h>

/**
 *array_range - Creates an array of integers
 *@min: The min
 *@max: The max
 *Return: A pointer to the newly created array
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
