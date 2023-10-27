#include "main.h"
#include "2-strlen_recursion.c"


/**
 * palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The lenngth of s.
 * @i: The index of s.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */

int palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	return (!(*s) ? 1 : palindrome(s, _strlen_recursion(s), 0));
}
