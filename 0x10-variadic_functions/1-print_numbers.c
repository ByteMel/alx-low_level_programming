#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - Prints numbers followed by a new line
 *@separator: The specified separator to use
 *@n: The integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1)
			printf("%s", separator);

	}

	va_end(args);

	printf("\n");

}
