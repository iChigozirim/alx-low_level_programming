#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Pointer to the file name.
 * @letters: Number of letters that should read and print.
 * Return: If function fails or filename is Null - 0
 *         Otherwise - 1.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	buffer[r] = '\0';
	w = write(STDIN_FILENO, buffer, r);
	if (o < 0 || r < 0 || w < 0)
	{
		free(buffer);
		return (0);
	}

	close(o);
	return (w);
}
