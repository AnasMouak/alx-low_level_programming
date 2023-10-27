#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string.
 *
 * Return: n.
 */

int _strlen(char *s)
{
int n = 0;

while (s[n] != '\0')
{
n++;
}
return (n);
}
