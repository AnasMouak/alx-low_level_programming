#include <stdio.h>

/**
 * main - list all natural numbers multiples of 3 & 5
 *
 * Return: Always 0.
 */

int main(void)
{
int sum = 0;
int i;
for (i = 3; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("%d\n", sum);

return (0);
}
