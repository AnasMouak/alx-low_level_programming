#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: integer for which the times table will be printed
 *
 * Description: prints the times table
 *
 * Return: void
 */


void print_times_table(int n)
{
int i, j;


if (n >= 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int v = i * j;
if (v < 10)
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(v  + '0');

if (j == n)
{
continue;
}
_putchar(',');
_putchar(' ');
}
else if (v >= 100)
{
_putchar(v / 100 + '0');
_putchar((v / 10) % 10 + '0');
_putchar(v % 10 + '0');

if (j == n)
{
continue;
}
_putchar(',');
_putchar(' ');
}
else
{
if (j != 0)
{
_putchar(' ');

}
_putchar(v / 10 + '0');
_putchar(v % 10 + '0');

if (j == n)
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
}
