#include "main.h"

/**
 *_strlen_recursion - Returns the length of a string
 *@s: The string
 *Return: The length
 */

int _strlen_recursion(char *s)
{
	return ((*s) ? 1 + _strlen_recursion(s + 1) : 0);
}
