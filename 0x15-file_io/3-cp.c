#include "main.h"

/**
 * main - program that copies the content
 * of a file to another file
 * @ac: length of av
 * @av: array of commands
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int fd_1, fd_2, n_read, n_wrote, buff_size = 1024;
	char *buffer;

	if (ac != 3)
		error_handling(97, NULL, 0);

	fd_1 = open(av[1], O_RDONLY);
	if (fd_1 == -1)
		error_handling(98, av[1], 0);
	fd_2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		error_handling(99, av[2], 0);

	buffer = malloc(sizeof(char) * buff_size);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Buffer failed!\n");
		exit(96);
	}

	do {
		n_read = read(fd_1, buffer, buff_size);
		if (n_read == -1)
		{
			free(buffer);
			close(fd_1);
			error_handling(98, av[1], 0);
		}
		n_wrote = write(fd_2, buffer, n_read);
		if (n_wrote == -1)
		{
			free(buffer);
			close(fd_2);
			error_handling(99, av[2], 0);
		}
	} while (n_read != 0);

	close(fd_2) == -1 ? (escape(100, NULL, fd_2)) :	close(fd_2);
	close(fd_1) == -1 ? (escape(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
/**
 * error_handling - handles errors
 * from the cp program
 * @error: error number
 * @str: string to print on error
 * @fd: file descriptor number
 *
 * Return: 0 on success
 */
int error_handling(int error, char *str, int fd)
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
