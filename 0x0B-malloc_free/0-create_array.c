#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */

char *create_array(unsigned int size, char c)
{

unsigned int i;

char *p = malloc(size * sizeof(char));

if (size == 0 || p == 0)
{
return (0);
}

for (i = 0; i < size; i++)
{
p [i] = c;
}
return (p);
}
