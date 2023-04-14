#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the STDOUT.
 * @filename: The name of the file to read.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
	{
	char *buf;
	ssize_t w;
	FILE *fp;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	w = fread(buf, sizeof(char), letters, fp);
	w = fwrite(buf, sizeof(char), w, stdout);

	free(buf);
	fclose(fp);
	return (w);
}
