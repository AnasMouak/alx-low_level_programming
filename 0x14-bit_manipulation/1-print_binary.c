#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned int t;

	if (n == 0)
	{
		_putchar('0');
	}

	i = 0;
	t = n;

	while (t > 0)
	{
		t >>= 1;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(((n >> i) & 1) + '0');
	}
}
