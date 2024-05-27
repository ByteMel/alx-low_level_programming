#include "main.h"

/**
 *print_diagonal - Draws a straight line
 *@n: Number of times
 *
 **/

void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < row; col++)
			_putchar(32);
		_putchar(92);
		_putchar(10);
	}
}
