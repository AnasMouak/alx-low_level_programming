#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)

{
int i, j;
int **s;

if (width <= 0 || height <= 0)
{
return (0);
}

s = malloc(height * sizeof(int *));

if (s == 0)
{
free(s);
return (0);
}

for (i = 0; i < height; i++)
{
s[i] = malloc(width * sizeof(int **));
if (s[i] == 0)
{
for (j = 0; j < i; j++)
{
free(s[j]);
}
free(s);
return (0);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
s[i][j] = 0;
}
}
return (s);
}
