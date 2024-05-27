#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments into a string
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: a pointer to the newly allocated space in memory
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, n = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			n++;
	}

	str = malloc(n + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[n] = '\0';

	return (str);
}
