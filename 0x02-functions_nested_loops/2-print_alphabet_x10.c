#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x followed by newline
 *
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	do {
		for (j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	} while (i < 10);
}
