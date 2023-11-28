#include "main.h"

/**
 * main- copies conent of one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int before, after;
	char buffer[1024];
	ssize_t id;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file from file_to\n", argv[0]);
		exit(97);
	}
	before = open(argv[1], O_RDONLY);
	if (before < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	after = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (after < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((id = read(before, buffer, 1024)) > 0)
	{
		if (write(after, buffer, id) != id)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (id < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(after) < 0)
	{
		dprintf(STDERR_FILENO, "Error: CAn't close fd %d\n", after);
		exit(100);
	}
	return (0);
}
