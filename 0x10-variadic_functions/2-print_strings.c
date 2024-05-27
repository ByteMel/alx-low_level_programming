#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - Prints strings followed by a new line
 *@separator: The separator between the strings
 *@n: The number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, char*);

		if (str == NULL)
			printf("(nil)");

		else
		{
			printf("%s", str);

			if (i < n - 1)
				printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");

}
