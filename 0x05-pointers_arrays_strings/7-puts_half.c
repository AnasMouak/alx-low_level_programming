#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */

void puts_half(char *str)
{
int n = 0;
int i;

while (str[n] != '\0')
{
n++;
}
for (i = n / 2; i < n; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
