#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer param
 * @n: param
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			printf("(nil)");
		}
		if (separator && i != 0)
		{
			printf("%s", separator);
		}
		printf("%s", va_arg(p, const char*));
	}
	printf("\n");
	va_end(p);
}
