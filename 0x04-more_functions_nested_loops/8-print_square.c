#include "main.h"

/**
 *print_square - Prints a square.
 *@size: The size of the square
 *
 **/

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
