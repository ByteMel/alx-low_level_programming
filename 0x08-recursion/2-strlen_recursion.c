#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	return ((*s) ? 1 + _strlen_recursion(s + 1) : 0);
}
