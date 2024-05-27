#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *@argc: The number of attributes
 *@argv: The array of arguments
 *Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
