#include "holberton.h"

/**
 * _strlen - get length of string
 * @s: takes string
 * Return: string length
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * create_file - creates a file and content
 * @filename: filename
 * @text_content: content of the file
 * Return: 0 success else -1
 */

int create_file(const char *filename, char *text_content)
{

	int fd, writefd, closefd;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 00400 | 00200);
	if (fd == -1)
		return (-1);

	writefd = write(fd, text_content, len);
	if (writefd == -1)
		return (-1);

	closefd = close(fd);
	if (closefd == -1)
		return (-1);
	return (1);
}
