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
 * append_text_to_file - append content to existing file
 * @filename: filename
 * @text_content: content of the file
 * Return: 0 success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, writefd, closefd;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	writefd = write(fd, text_content, len);
	if (writefd == -1)
		return (-1);

	closefd = close(fd);
	if (closefd == -1)
		return (-1);
	return (1);
}
