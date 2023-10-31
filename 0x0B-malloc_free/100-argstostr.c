#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates
 *             all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *         or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
char *s;
int i, j, z;
int size;

if (ac == 0 || av == 0)
{
return (0);
}
size = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
size++;
}
size++;
}

s = malloc((size + 1) * sizeof(char));

if (s == 0)
{
return (0);
}
z = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[z] = av[i][j];
z++;
}
s[z] = '\n';
z++;
}
s[z] = '\0';
return (s);
}
