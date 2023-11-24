#include "main.h"


/**
 * print_binary - Entry point
 * @n: the integer to find its binary code
 */
void print_binary(unsigned long int n)
{
	int b, count = 0;
	unsigned long int former;

	for (b = 63; b >= 0; b--)
	{
		former = n >> b;

		if (former & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}

	if (!count)
		putchar('0');
}
