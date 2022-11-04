#include "main.h"

/**
 * escape - error handling, printing
 * error messages with exit value
 * @error: exit value
 * @str: name of file
 * @fd: file descriptor
 *
 * Return: 0 on success
 */
int escape(int error, char *str, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - a program that copies
 * the content of one file to 
 * another.
 * @ac: lenght of av
 * @av: array of commands
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int fd_1, fd_2, n_read, n_wrote;
	char *buffer[1024];

	if (ac != 3)
	{
		escape(97, NULL, 0);
	}

	/*open file_to and set file descriptor*/
	fd_2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 < 0)
		escape(99, av[2], 0);

	/*open file_from and set file descriptor*/
	fd_1 = open(av[1], O_RDONLY);
	if (fd_1 < 0)
		escape(98, av[1], 0);

	/*reads from file_from while read is more than zero*/
	while ((n_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (n_read < 0)
			escape(98, av[1], 0);
		
		/*writes to file_to*/
		n_wrote = write(fd_2, buffer, n_read);
		if (n_wrote < 0)
			escape(99, av[2], 0);
	}

	if (close(fd_2) == -1)
		escape(100, NULL, fd_2);
	else
		close(fd_2);

	if (close(fd_1) == -1)
		escape(100, NULL, fd_1);
	else
		close(fd_1);

	return (0);
}
