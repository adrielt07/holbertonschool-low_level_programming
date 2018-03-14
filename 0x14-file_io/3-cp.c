#include "holberton.h"

/**
 * main - copy existing file to a new file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int from, to, closefr, closeto, f_from, w_to;
	int permission = 00400 | 00200 | 00040 | 00020 | 00004;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "USAGE: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(from, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, permission);
	if (to == -1)
	{
		dprintf(to, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	f_from = read(from, buffer, 1024);
	if (f_from == -1)
	{
		dprintf(f_from, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (f_from > 0)
	{
		w_to = write(to, buffer, f_from);
		if (w_to == -1)
		{
			dprintf(w_to, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		f_from = read(from, buffer, 1024);
	}
	closefr = close(from);
	if (closefr == -1)
	{
		dprintf(closefr, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	closeto = close(to);
	if (closeto == -1)
	{
		dprintf(closeto, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
