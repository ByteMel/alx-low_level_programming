#include "main.h"

/**
 *_memset - Fills the memory with a constant byte
 *@s: Pointer to the memory
 *@b: The desired Value
 *@n: The number of bytes
 *Return: To the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
