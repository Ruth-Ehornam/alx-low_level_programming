#include "main.h"i
#include <stdlib.h>

/*
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	char buffer[letters];
	ssize_t read_bytes = read(fd, buffer, letters);

	if (read_bytes == -1)

	{
	close(fd);
	return (0);
	}

ssize_t written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes != read_bytes)
	{
	close(fd);
	return (0);
	}

	close(fd);
	return (read_bytes);
}
