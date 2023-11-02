#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: pointer to newly allocated memory, or NULL if failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *op = ptr;
unsigned int i;

if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != 0)
{
free(ptr);
return (0);
}
if (ptr == 0)
{
p = malloc(new_size);
return (p);
}
p = malloc(new_size);
if (p == 0)
{
return (0);
}
if (new_size > old_size)
{
for (i = 0; i < old_size && i < new_size; i++)
{
p[i] = op[i];
}
free(ptr);
}
return (p);
}
