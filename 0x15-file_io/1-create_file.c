#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int b_wr;

	if (filename == 0)
	{
		return (-1);
	}
	if (text_content == 0)
	{
		fd = open(filename, O_CREAT);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IRUSR);

	if (fd == -1)
	{
		return (0);
	}

	close(fd);
	text_content = '\0';
	b_wr = write(fd, text_content, '\0');

	if (!O_CREAT || !b_wr)
	{
		return (-1);
	}

	return (1);
}
