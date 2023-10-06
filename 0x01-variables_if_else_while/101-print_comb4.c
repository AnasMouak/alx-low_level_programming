#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
int j;
int v;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (v = j + 1; v < 10; v++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + v);

if (i == 7 && j == 8 && v == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
