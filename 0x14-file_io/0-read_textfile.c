#include "holberton.h"

/**
 * read_textfile = read file
 * @filename: pointer to filename
 * @letters: number of letters to print
 * Return: 0 if failed, else number of characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t fd, readfd = 1;
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

	write(STDOUT_FILENO, buffer, readfd);

	close(fd);
	return (readfd);
}
