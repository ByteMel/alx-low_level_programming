#include "main.h"

/**
 * _isalpha - Checks for a alphabet character
 *@c: character to test
 *Return: 1 if it is an alphabet, 0 if it is not an alphabet.
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
