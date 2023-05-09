#include "main.h"

/**
 * main - program that copies the content
 * of a file to another file
 * @ac: length of av
 * @av: array of commands
 *
 * return: Always 0
 */
int main(int ac, char **av)
{
    int fd_1, fd_2, n_read, n_wrote, buff_size = 1024;
    char *buffer;

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_1 = open(av[1], O_RDONLY);
    if (fd_1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    fd_2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
    if (fd_2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        exit(99);
    }

    buffer = malloc(sizeof(char) * buff_size);
    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO, "Buffer failed!\n");
        exit (96);
    }

    do{
        n_read = read(fd_1, buffer, buff_size);
        if (n_read == -1)
        {
            free(buffer);
            close(fd_1);
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
            exit(98);
        }

        n_wrote = write(fd_2, buffer, n_read);
        if (n_wrote == -1)
        {
            free(buffer);
            close(fd_2);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
            exit(99);
        }
    } while (n_read != 0);

    if (close(fd_1) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_1);
        exit(100);
    } else if (close(fd_2) == -1) {        
        dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_2);
        exit(100);
    } else {
        close(fd_1);
        close(fd_2);
    }

    return(0);
}
