#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the two dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **array_2d, cols, rows;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2d = malloc(sizeof(int *) * height);

	if (array_2d == NULL)
		return (NULL);

	for (rows = 0; rows < height; rows++)
	{
		array_2d[rows] = malloc(sizeof(int) * width);

		if (array_2d[rows] == NULL)
		{
			for (cols = 0; cols < rows; cols++)
				free(array_2d[cols]);
			free(array_2d);
			return (NULL);
		}
	}

	return (array_2d);
}
