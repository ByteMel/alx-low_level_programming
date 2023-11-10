#include "3-calc.h"

/**
 * main - prints the opcodes of self
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
