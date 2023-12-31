#include "main.h"

char *_strncat(char *dest, char *src, int n);

/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}

dest[i + j] = '\0';

return (dest);
}
