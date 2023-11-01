#include <stdlib.h>
#include "main.h"

int _len(char *str);
int argc(char *str);
char **strtow(char *str);

/**
 * _len - returns the length of a string
 * @str: string to be checked
 *
 * Return: the length of the string
 */

int _len(char *str)
{
	int i = 0, length = 0;

	while (str[i] != '\0' && str[i] != ' ')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * argc - count the number of arguments passed
 * @str: arguments passed
 *
 * Return: number of arguments
 */

int argc(char *str)
{
	int i = 0, args = 0, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			args++;
			i += _len(str + i);
		}
	}

	return (args);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: NULL if str == NULL or str == "", otherwise
 *		a pointer to the newly allocated space in memory
 */

char **strtow(char *str)
{
	char **string;
	int i = 0, words, chr, l, w;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = argc(str);


	if (words == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (words + 1));

	if (string == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		chr = _len(str + i);
		string[w] = malloc(chr + 1);

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);
			free(string);
			return (NULL);
		}

		for (l = 0; l < chr; l++)
			string[w][l] = str[i++];

		string[w][l] = '\0';
	}

	string[w] = NULL;

	return (string);
}
