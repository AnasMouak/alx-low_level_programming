#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints num
 * @separator: pointer param
 * @n: param
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	if (*separator == 0)
	{
		return;
	}

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(p, unsigned int));
	}
	printf("\n");
	va_end(p);
}
