#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _puts - prints a string to stdout
 * @s: The string to print
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * _strcpy - copies a string to another string
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */

int _atoi(char *s)
{
	int i, j = 0, k = -1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			k *= -1;
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			if (j < 0)
				j = (j * 10) - (*(s + i) - '0');
			else
				j = (s[i] - '0') * -1;
			if (s[i + 1] < 48 || s[i] > 57)
				break;
		}
	}
	if (k < 0)
		j *= -1;

	return (j);
}
