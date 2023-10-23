#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character aka the character found
 */

char *_strchr(char *s, char c)
{
int i;
int n;

while (s[n] != '\0')
{
n++;
}
for (i = 0; i <= n; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
