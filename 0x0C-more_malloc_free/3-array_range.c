#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{
int *a;
int i;

if (min > max)
{
return (0);
}

a = malloc(sizeof(int) * (max - min + 1));
if (a == 0)
{
return (0);
}

for (i = 0; i <= max; i++)
{
a[i] = i;
}
return (a);
}
