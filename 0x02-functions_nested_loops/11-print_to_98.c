#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

void print_to_98(int n)

{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
printf("\n");
}
else if (n >= 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
printf("\n");
}
}
