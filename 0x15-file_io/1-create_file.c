#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to put in file
 * 
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd; /*file descriptor*/
	int i, n_wrote = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i]; i++)
		;

	n_wrote = write(fd, text_content, i);
	if (n_wrote < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
