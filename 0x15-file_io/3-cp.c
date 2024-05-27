#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * open_file - opens a file
 * @filename: name of the file
 * @flags: flags of the file
 * @mode: mode of the file
 *
 * Return: file descriptor
 */

int open_file(const char *filename, int flags, mode_t mode)
{
	int fd;

	fd = open(filename, flags, mode);
	return (fd);
}

/**
 * close_file - closes a file
 * @fd: file descriptor
 * Return: 0 on success, -1 on failure
 */

int close_file(int fd)
{
	int res;

	res = close(fd);
	return (res);
}

/**
 * copy_file - copies a file
 * @src: source file
 * @dest: destination file
 * Return: 0 on success, -1 on failure
 */

int copy_file(const char *src, const char *dest)
{
	int fd_src, fd_dest;
	ssize_t res;
	char buffer[BUFFER_SIZE];

	fd_src = open_file(src, O_RDONLY, 0);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", src);
		exit(98);
	}
	fd_dest = open_file(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	while ((res = read(fd_src, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_dest, buffer, res) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close_file(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close_file(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	result = copy_file(argv[1], argv[2]);

	return (result);
}
