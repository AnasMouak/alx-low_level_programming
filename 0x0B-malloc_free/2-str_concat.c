#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
int i, j;
int size = 0;
int sizee = 0;
char *co;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[size] != '\0')
{
size++;
}
while (s2[sizee] != '\0')
{
sizee++;
}

co = malloc((size + sizee) * sizeof(char));

if (co == 0)
{
return (0);
}

for (i = 0; i < size; i++)
{
co[i] = s1[i];
}
for (j = 0; j < sizee; j++)
{
co[i + j] = s2[j];
}

return (co);
}
