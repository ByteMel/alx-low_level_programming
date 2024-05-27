#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: The array
 * @size: The size
 */

void print_diagsums(int *a, int size)
{
	int i, j, sumi = 0, sumj = 0;

	for (i = 0; i < size; i++)
	{
		sumi += a[i];
		a += size;
	}

	a -= size;

	for (j = 0; j < size; j++)
	{
		sumj += a[j];
		a -= size;
	}

	printf("%d, %d\n", sumi, sumj);
}
