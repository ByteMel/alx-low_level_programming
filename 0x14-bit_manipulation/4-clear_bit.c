#include "main.h"

/**
 * clear_bit - Entry point
 * @index: index, starting from 0 of the bit you want to set
 * @n: integer
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
