#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process termination if error
 */

void *malloc_checked(unsigned int b)
{

int *s = malloc(b);

if (s == 0)
{
exit(98);
}

return (s);
}
