#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file
 * @letters: number of characters to read and print
 *
 * Return: actual number of characters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	/* Əgər filename NULL-dursa */
	if (filename == NULL)
		return (0);

	/* Faylı aç */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Yaddaş ayır */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Faylı oxu */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Oxunanı ekrana yaz */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Təmizləmə */
	free(buffer);
	close(fd);

	return (bytes_written);
}
