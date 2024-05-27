#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - A function that finds the same of all its parenthesis
 *@n: The arguments
 *Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; ++i)
		result += va_arg(args, int);

	va_end(args);

	return (result);
}
