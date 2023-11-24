#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: num 1
 * @m: num 2
 * Return: number of bits you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int num;

	num = n ^ m;
	while (num != 0)
	{
		i += num & 1;
		num >>= 1;
	}
	return (i);
}
