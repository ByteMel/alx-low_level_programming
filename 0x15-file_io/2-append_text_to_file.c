#include "main.h"

/**
 * append_text_to_file - appends a text to the end of the file
 * @filename: file which text is appended to
 * @text_content: the NULLterminated string to add at the end of the file
 * Return: 1 0n succes and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, app;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	app = write(fd, text_content, strlen(text_content));

	if (app == -1 || app != (int)strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

