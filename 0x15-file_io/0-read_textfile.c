#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the number of letters it was able to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n = read(fd, buffer, letters);
	if (n == -1)
		return (0);

	write(STDOUT_FILENO, buffer, n);

	close(fd);
	free(buffer);
	return (n);
}
