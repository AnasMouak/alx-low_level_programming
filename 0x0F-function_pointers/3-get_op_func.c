#include <stdio.h>
#include "calc.h"

/**
  * get_op_func - choosing the right func for the operator
  * @s: the operator
  *
  * Return: result of function or error
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == *s && !s[1])
		{
			return (ops[i].f);
		}
	i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
