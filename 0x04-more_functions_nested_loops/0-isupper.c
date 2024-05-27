#include "main.h"

/**
 *_isupper - Checks for an uppercase character
 *@c: The character being tested
 *Return: (1) if Uppercase, (0) if otherwise
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
