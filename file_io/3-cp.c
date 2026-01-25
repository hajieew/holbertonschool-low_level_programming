#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

/**
 * error_exit - Prints an error message to stderr and exits with a code
 * @code: Exit code
 * @message: Error message format
 * @file: File name or descriptor number
 */
void error_exit(int code, const char *message, const char *file)
{
    if (code == 100) /* fd error */
        dprintf(STDERR_FILENO, message, file);
    else
        dprintf(STDERR_FILENO, message, file);
    exit(code);
}

/**
 * main - Copies the content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits on error
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, rd_bytes, wr_bytes, close_err;
    char buffer[1024];

    if (argc != 3)
        error_exit(97, "Usage: cp %s %s\n", argv[1]);

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

    while ((rd_bytes = read(fd_from, buffer, 1024)) > 0)
    {
        wr_bytes = write(fd_to, buffer, rd_bytes);
        if (wr_bytes != rd_bytes)
        {
            close(fd_from);
            close(fd_to);
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
        }
    }

    if (rd_bytes == -1)
    {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    close_err = close(fd_from);
    if (close_err == -1)
        error_exit(100, "Error: Can't close fd %d\n", "fd_from");

    close_err = close(fd_to);
    if (close_err == -1)
        error_exit(100, "Error: Can't close fd %d\n", "fd_to");

    return 0;
}
