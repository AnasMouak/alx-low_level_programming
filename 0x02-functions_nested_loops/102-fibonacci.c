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
long int n1 = 0, n2 = 1;
long int fib;

for (i = 1; i <= n; i++)
{
if (i != 51 && i != 1)
{
printf(", ");
}
fib = n1 + n2;
printf("%li", fib);

n1 = n2;
n2 = fib;
}
printf("\n");
return (0);
}
