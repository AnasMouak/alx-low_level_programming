#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits_count;
	unsigned long int xor;

	if (n == m)
	{
		return (0);
	}

	bits_count = 0;

	xor = n ^ m;

	while (xor > 0)
	{
		bits_count += xor & 1;
		xor >>= 1;
	}

	return (bits_count);
}
