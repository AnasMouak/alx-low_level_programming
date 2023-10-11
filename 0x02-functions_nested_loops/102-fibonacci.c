#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
int n = 50;
long long n1 = 0, n2 = 1;
long long fib;

printf("%lld, %lld", n1, n2);

for (i = 3; i <= n; i++)
{
if (i != 51)
{
printf(", ");
}
fib = n1 + n2;
printf("%lld", fib);

n1 = n2;
n2 = fib;
}
printf("\n");
return (0);
}
