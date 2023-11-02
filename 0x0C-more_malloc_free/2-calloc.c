#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
char *s;
if (nmemb == 0 || size == 0)
{
return (0);
}

s = malloc(nmemb * size);
if (s == 0)
{
return (0);
}

return (s);
}
