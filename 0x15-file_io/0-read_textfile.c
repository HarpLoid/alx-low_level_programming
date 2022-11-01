#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to Standard out.
 * @filename: pointer to file.
 * @letters: number of letters.
 * to read and print.
 *
 * Return: number of letters read
 * and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_r, n_w;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	n_r = read(fd, buffer, letters);
	if (n_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_w = write(STDOUT_FILENO, buffer, n_r);
	if (n_w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_r);
}
