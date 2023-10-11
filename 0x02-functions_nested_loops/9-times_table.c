#include "main.h"

/**
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */

void times_table(void)

{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int v = i * j;
if (v < 10)
{
if (j != 0)
{
_putchar(' ');
}
_putchar(v  + '0');
if (j == 9)
{
continue;
}
_putchar(',');
_putchar(' ');
}
else
{
_putchar(v / 10 + '0');
_putchar(v % 10 + '0');

if (j == 9)
{
continue;
}
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
