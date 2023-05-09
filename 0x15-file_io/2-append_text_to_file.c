#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file to append text to
 * @text_content: text to append to file
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t n_wrote;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i]; i++)
		;

	n_wrote = write(fd, text_content, i);
	if (n_wrote == -1 || n_wrote != i)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
