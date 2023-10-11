#include<stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
int n = 98;
unsigned long n1 = 0, n2 = 1;
unsigned long fib;

for (i = 1; i <= n; i++)
{
if (i != 99 && i != 1)
{
printf(", ");
}
fib = n1 + n2;
printf("%lu", fib);

n1 = n2;
n2 = fib;
}
printf("\n");
return (0);
}
