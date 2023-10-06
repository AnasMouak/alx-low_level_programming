#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;
int v;
int z;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (v = i; v < 10; v++)
{
for (z = (i == v) ? j + 1 : 0 ; z < 10; z++)
{
putchar('0' + i);
putchar('0' + j);
putchar(' ');
putchar('0' + v);
putchar('0' + z);


if (i == 9 && j == 8 && v == 9 && z == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
