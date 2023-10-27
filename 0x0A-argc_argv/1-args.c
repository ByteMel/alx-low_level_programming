#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	argc = 0;

	for (; *(argv + i); i++)
		argc++;

	printf("%d\n", argc - 1);

	return (0);
}
