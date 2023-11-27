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
	int n;

	if (filename == 0)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IRUSR);

	if (fd == -1)
	{
		return (-1);
	}

	n = 0;
	while (text_content[n])
	{
		n++;
	}
	b_wr = write(fd, text_content, n);

	if (!b_wr)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
