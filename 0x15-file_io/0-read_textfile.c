#include "main.h"

/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[1000];
	int fd;
	ssize_t b_re;
	ssize_t b_wr;

	if (filename == 0)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	b_re = read(fd, buff, letters);

	if (b_re == -1)
	{
		return (0);
	}

	close(fd);

	b_wr = write(STDOUT_FILENO, buff, b_re);

	if (b_wr == -1)
	{
		return (0);
	}

return (b_re);
}
