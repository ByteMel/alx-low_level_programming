#include "main.h"

/**
 *puts_half - Prints half of a string
 *@str: The string put to test
 */

void puts_half(char *str)
{
	int len = 0;
	int n = (len - 1) / 2;
	int i = n;

	while (str[len] != '\0')
	{
		len++;
	}


	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}


