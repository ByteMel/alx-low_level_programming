#include "main.h"

/**
 * sqr_root - returns the square root of a number
 * @base: The base number
 * @root: The root number, otherwise -1
 *
 * Return: The square root of the number
 */

int sqr_root(int base, int root)
{
	return (
			(root * root == base) ? root :
			(root == base / 2) ? -1 :
			sqr_root(base, root + 1)
		);
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: The number to get the square root of
 *
 * Return: The square root of the number
 */

int _sqrt_recursion(int n)
{
	return (((n < 0) ? -1 : (n == 1) ? 1 : sqr_root(n, 1)));
}
