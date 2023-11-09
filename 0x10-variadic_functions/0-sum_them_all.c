#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...);

/**
 * sum_them_all - adds num
 * @n: param
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list p;

	if (n == 0)
	{
		return (0);
	}

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, unsigned int);
	}
va_end(p);

return (sum);
}
