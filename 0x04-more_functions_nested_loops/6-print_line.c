#include "main.h"

/**
 *print_line - Draws a straight line
 *@n: Number of times
 *
 **/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar(10);
}
