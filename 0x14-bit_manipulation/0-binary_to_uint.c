#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary string
 * Return: unsigned int,or 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int bLen = 0, decval = 1, i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		bLen++;

	for (i = bLen - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			num += decval;
		decval *= 2;
	}
	return (num);
}
