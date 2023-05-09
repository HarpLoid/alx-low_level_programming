#include "main.h"

/**
 * create_file - creates a file
 * and adds contents to it
 * @filename: name fo file to be created
 * @text_content: text content to be added to the file
 *
 * return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, i;
    ssize_t n_wrote;

    if (!filename)
        return(-1);

    fd = open(filename, O_RDWR|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR);
    if (fd == -1)
        return (-1);

    if (!text_content)
    {
        close(fd);
        return(1);
    }

    for (i = 0; text_content[i]; i++);

    n_wrote = write(fd, text_content, i);
    if (n_wrote == -1)
    {
        close(fd);
        return(-1);
    }

    close(fd);
    return(1);
}
