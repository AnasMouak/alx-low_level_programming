#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, size, n;

	if (b == 0)
	{
		return (0);
	}

	size = 0;
	while (b[size] != '\0')
	{
		if (b[size] != '0' && b[size] != '1')
		{
			return (0);
		}
		size++;
	}

	n = 0;

	for (i = 0; i < size; i++)
	{
		n = n * 2 + (b[i] - '0');
	}

	return (n);
}
