#include <stdio.h>

/**
 *main - Prints the name of the program
 *@argc: The number of attributes
 *@argv: The array of arguments
 *Return: Always 0.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
