#include "main.h"

/**
 * _puts - Prints a string.
 * @str: string.
 */

void _puts(char *str)
{
int n = 0;
int i;

while (str[n] != '\0')
{
n++;
}
for (i = 0 ; i < n; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
