#include "main.h"

/**
 *more_numbers - prints 10 times the numbers from 0 - 14
 *
 **/

void more_numbers(void)
{
	int row, cols;

	for (row = 0; row < 10; row++)
	{
		for (cols = 0; cols <= 14; cols++)
		{
			if (cols > 9)
				_putchar((cols / 10) + '0');
			_putchar((cols % 10) + '0');
		}
	_putchar('\n');
	}
}
