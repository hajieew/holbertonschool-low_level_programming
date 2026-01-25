#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void close_file_or_exit(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

void copy_file(int fd_from, int fd_to, const char *from_name, const char *to_name)
{
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				to_name);
			close_file_or_exit(fd_from);
			close_file_or_exit(fd_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			from_name);
		close_file_or_exit(fd_from);
		close_file_or_exit(fd_to);
		exit(98);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments
 * @argv: Arguments vector
 *
 * Return: 0 on success, exits with codes 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			 argv[2]);
		close_file_or_exit(fd_from);
		exit(99);
	}

	copy_file(fd_from, fd_to, argv[1], argv[2]);

	close_file_or_exit(fd_from);
	close_file_or_exit(fd_to);

	return (0);
}
