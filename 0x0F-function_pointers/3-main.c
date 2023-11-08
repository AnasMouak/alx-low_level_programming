#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 4)
	{
		if (argv[2])
		{
			get_op_func(argv[2]);

			result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
			printf("%d\n", result);
		}
		else
		{
			printf("Error\n");
			exit(99);
		}

	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
