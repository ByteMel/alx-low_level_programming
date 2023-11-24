#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;
	char *b = (char *)&n;

	if (*b)
		return (1);
	else
		return (0);
}
