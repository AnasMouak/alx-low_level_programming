#include <stdio.h>


/**
 * add - adds a and b
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts b from a
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies a and b
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides a by b
 * @a: first number
 * @b: second number
 *
 * Return: integer division of a by b
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - find the remainder of the division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a by b
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a % b);
}
