#include <stdlib.h>
#include "main.h"

char *_strdup(char *str);

/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */

char *_strdup(char *str)
{
int i;
int size = 0;

char *cp = malloc((size + 1) * sizeof(char));

while (str[size] != '\0')
{
size++;
}

if (str == 0 || cp == 0)
{
return (0);
}

for (i = 0; i < size; i++)
{
cp[i] = str[i];
}
cp[size] = '\0';
return (cp);
}
