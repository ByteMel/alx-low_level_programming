
#include "main.h"

/**
 * get_bit - gets value of a bit at given index
 * @index: index given
 * @n: number given
 * Return: value of bit at the index given
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask, val;

	if (index > 32)
		return (-1);
	mask = 1 << index;
	val = mask & n;
	if (val > 0)
		return (1);
	else
		return (0);
}
