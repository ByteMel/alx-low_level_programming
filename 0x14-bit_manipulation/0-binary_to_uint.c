#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The binary number
 * Return: The unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			n = (n << 1) + (b[i] - '0');
		else
			return (0);
	}
	return (n);
}
