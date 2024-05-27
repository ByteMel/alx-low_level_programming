#include "main.h"

/**
 *_isdigit - Checks for a digit 0 through 9
 *@c: The character being tested
 *Return: (1) if a number, (0) if otherwise
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
