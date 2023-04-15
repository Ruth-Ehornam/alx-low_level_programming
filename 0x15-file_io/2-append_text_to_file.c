#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: add to the end of the file.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	size_t bytes_written;

	if (!filename)

		return (-1);

	len = text_content ? strlen(text_content) : 0;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)

		return (-1);

	bytes_written = write(fd, text_content, len);

	if (bytes_written != len)

		return (-1);

	close(fd);

	return (1);
}

