#include "main.h"

/**
 *rot13 - encodes a string using rot13
 *@str: string to e encoded
 *Return: Pointer to the encoded string
 */

char *rot13(char *str)
{
	int i, j;

	char enc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dec[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (enc[j] == *(str + i))
			{
				*(str + i) = dec[j];
					break;
			}
		}
	}

	return (str);
}
