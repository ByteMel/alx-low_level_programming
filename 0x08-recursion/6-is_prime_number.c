#include "main.h"

/**
 * divisor - returns 1 if n is a divisor of m
 * @base: base number
 * @div: divisor
 *
 * Return: 1 if base is a divisor of div, 0 otherwise
 */

int divisor(int base, int div)
{
	if (base % div == 0)
		return (0);

	if (div == base / 2)
		return (1);

	return (divisor(base, div + 1));
}


/**
 * is_prime_number - checks if a number is a prime number
 * @n: The number
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	return ((n <= 1) ? 0 : (n >= 2 && n <= 3) ? 1 : divisor(n, 2));
}
