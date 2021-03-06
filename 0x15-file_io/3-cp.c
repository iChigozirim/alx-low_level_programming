#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);

/**
 * close_file - Closes file descriptor.
 * @fd: File descriptor to be closed.
 */

void close_file(int fd)
{
	close(fd);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}


/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Array if arguments passed.
 * Return: Always nothing.
 */
int main(int argc, char **argv)
{
/* file from, file to, read, write */
	int ff, ft, r, w;
	char buffer[BUFSIZ];

	if (argc < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ff = open(argv[1], O_RDWR);
	ft = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	r = read(ff, buffer, BUFSIZ);
	w = write(ft, buffer, r);

	if (ff < 0 || !argv[1])
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (ft < 0 || w < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close_file(ff);
	close_file(ft);

	return (0);
}

