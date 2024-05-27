#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i = 0, j;

	do {
		for (j = 0; j < 10; j++)
		{
			int n = i * j;

			if (j == 0)
				_putchar('0');
			else if (n < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(n + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		} i++;

		_putchar('\n');

	} while (i < 10);
}
