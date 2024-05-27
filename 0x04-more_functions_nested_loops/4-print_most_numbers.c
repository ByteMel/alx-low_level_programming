#include "main.h"

/**
 *print_most_numbers - Prints numbers from 0- 9 except 2 and 4
 *
 **/

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == 50 || n == 52)
			continue;
		_putchar(n);
	}
	_putchar(10);
}
