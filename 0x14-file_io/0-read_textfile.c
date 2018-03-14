#include "holberton.h"

/**
 * read_textfile - read existing file
 * @filename: pointer to filename
 * @letters: number of letters to print
 * Return: 0 if failed, else number of characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, writefd, closefd, readfd;
	char buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readfd = read(fd, buffer, letters);
	if (readfd == -1)
		return (0);

	writefd = write(STDOUT_FILENO, buffer, readfd);
	if (writefd == -1)
		return (0);

	closefd = close(fd);
	if (closefd == -1)
		return (0);

	return (readfd);
}
