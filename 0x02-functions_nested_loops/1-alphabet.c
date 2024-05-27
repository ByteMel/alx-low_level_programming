#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed by newline
 *
 *
 */

void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
		putchar(i);
	putchar('\n');
}
