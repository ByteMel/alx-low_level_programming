#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: The string used
 *
 */

void print_rev(char *s)
{
	unsigned int len = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		len += sizeof(char);

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar(10);
}
