#include "main.h"

/**
 * flip_bits - flip the bits
 * @n: number
 * @m: number
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int n1 = n;
	unsigned long int m1 = m;

	while (n1 != 0 || m1 != 0)
	{
		if ((n1 & 1) != (m1 & 1))
			count++;
		n1 >>= 1;
		m1 >>= 1;
	}
	return (count);
}
