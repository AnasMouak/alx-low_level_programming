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
char *cp;

if (str == 0)
{
return (0);
}

int size = 0;
while (str[size] != '\0')
{
size++;
}

cp = malloc((size + 1) * sizeof(char));

if (cp == 0)
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
