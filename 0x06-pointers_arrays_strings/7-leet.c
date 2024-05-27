#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;

	char enc[] = "aAeEoOtTlL";
	char dec[] = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (enc[j] == *(str + i))
				*(str + i) = dec[j];
		}
	}

	return (str);
}
