#include "main.h"

/**
 *  read_textfile - reads file and prints it to the stdout
 *  @filename: file to be read
 *  @letters: characters to be printed
 *  Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int total_num, read_num, fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char *) * (letters + 1));

	if (!buffer)
	{
		close(fd);
		return (0);
	}

	total_num = read(fd, buffer, letters);
	if (total_num < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[total_num] = '\0';

	read_num =  write(STDOUT_FILENO, buffer, total_num);
	if (read_num < 0 || read_num != total_num)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (total_num);
}
