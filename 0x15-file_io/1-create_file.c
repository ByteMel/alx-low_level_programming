#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of the file to be created
 * @text_content: string to be written in text
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, id = 0, tot = 1;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[id])
		{
			id++;
		}
		tot = write(fd, text_content, id);

	}
	if (tot == -1)
		return (-1);
	close(fd);
	return (1);
}
