#include "holberton.h"

/**
 * read_textfile - read existing file
 * @filename: pointer to filename
 * @letters: number of letters to print
 * Return: 0 if failed, else number of characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, read_file = 1;
	unsigned int w_file;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_file = read(fd, buffer, letters);
	if (read_file == -1)
		return (0);

	w_file = write(STDOUT_FILENO, buffer, read_file);

	close(fd);
	return (w_file);
}
