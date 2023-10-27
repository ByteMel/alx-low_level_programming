#include <stdio.h>
#define UNUSED(unused_param) (void)(unused_param)

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);

	printf("%s\n", argv[0]);

	return (0);
}
