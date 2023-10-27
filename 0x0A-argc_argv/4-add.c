#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive integers and prints the result
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 on less that 2 args, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
