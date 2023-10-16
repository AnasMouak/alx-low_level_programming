#include "main.h"

/**
 * _puts - Prints a string.
 * @str: string.
 */

void _puts(char *str)
{
int n = 0;

while (str[n] != '\0')
{
n++;
}
for (int i = 0 ; i <= n; i++)
{
putchar(str[i]);
}
putchar('\n');
}
