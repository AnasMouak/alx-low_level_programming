#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */

void puts2(char *str)
{
int n = 0;
int i;

while (str[n] != '\0')
{
n++;
}
for (i = 0 ; i < n; i++)
{
if (i % 2 == 1)
{
continue;
}
_putchar(str[i]);
}
_putchar('\n');
}
