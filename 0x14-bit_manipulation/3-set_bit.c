#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	*n |= (1u << index);

	return (1);
}

