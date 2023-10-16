#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{

int n = 0;
int g = 1;

while (*s)
{
if (*s == '-')
{
g = -1;
}
else if (*s >= '0' && *s <= '9')
{
n = n * 10 + (*s - '0');
}
else if (*s == '+')
{
}
else if (n != 0)
{
break;
}
s++;
}
return (n *g);
}
