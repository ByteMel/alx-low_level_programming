#include "main.h"

/**
 *_puts - prints a screen followed by a new line
 *
 *@str: The string being used
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar(10);


}
