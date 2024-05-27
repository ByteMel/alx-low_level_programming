#include "main.h"

/**
 *factorial - returns the factorial of a given number
 *@n: The number
 *Return: The factorial of the number
 */

int factorial(int n)
{
	return ((n < 0) ? -1 : (n <= 1) ? 1 : n * factorial(n - 1));
}
