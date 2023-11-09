#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: param
 */

void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int in, j;
	char *s;
	const char arg[] = "cifs";

	va_start(p, format);

	in = 0;
	while (format && format[in])
	{
		j = 0;
		while (arg[j])
		{
        		if (format[in] == arg[j] && in != 0)
			{
			printf(", ");
			break;
			}
		j++;
		}
		switch (format[in])
		{
			case 'c':
			{
				printf("%c", va_arg(p, int));
				break;
			}
			case 'i':
			{
				printf("%d", va_arg(p, int));
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(p, double));
				break;
			}
			case 's':
			{
				s = va_arg(p, char*);
				if (s)
				{
					printf("%s", s);
				}
				else
				{
					printf("(nil)");
				}
				break;
			}
		}
	in++;
	}
	printf("\n");
	va_end(p);
}
