#include "main.h"

/**
 * main - check the code .
 * @argc: number of arguments
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int ac, char **av)
{
    int file_from, file_to, errorclose;
    char buff[1024];
    ssize_t b_re;
    ssize_t b_wr;

    if (ac != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }
    
    file_from = open(av[1], O_RDONLY);

    if (file_from == -1)
    {
	    dprintf(2, "Error: Can't read from file %s\n", av[1]);
	    exit(98);
    }
    
    file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

    if (file_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", av[2]);
        exit(99);
    }
    b_re = read(file_from, buff, sizeof(buff));
    if (b_re == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", av[1]);
	exit(98);
    }
    b_wr = write(file_to, buff, b_re);
    if (b_wr == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", av[2]);
	exit(99);
    }

    errorclose = close(file_from);

    if (errorclose == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", file_from);

        exit(100);
    }

    errorclose = close(file_to);
    
    
    if (errorclose == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }


    return (0);
}
