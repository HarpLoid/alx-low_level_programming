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
	int fd, err, erw;
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

	err = read(fd, buffer, letters);
	if (err == -1)
	{
		return (0);
	}

	erw = write(STDOUT_FILENO, buffer, letters);
	if (erw == -1)
	{
		return (0);
	}
	
	return (letters);
	close(fd);
	free(buffer);
}
