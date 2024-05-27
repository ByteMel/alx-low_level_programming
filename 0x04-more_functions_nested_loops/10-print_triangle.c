#include "main.h"

/**
 *print_triangle - Draws a straight line
 *@size: Number of times
 *
 **/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar(10);

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(32);
		for (k = 0; k < i; k++)
			_putchar(35);
		_putchar(10);
	}
}
