#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size, sizee;
char *p;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size = 0;
while (s1[size] != '\0')
{
size++;
}
sizee = 0;
while (s2[sizee] != '\0')
{
sizee++;
}
p = malloc(sizeof(char) * (size + n + 1));
if (p == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
p[i] = s1[i];
}
for (j = 0; j < n; j++)
{
p[i++] = s2[j];
}
p[i] = '\0';
return (p);
}
