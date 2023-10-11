#include <stdio.h>

/**
 * main - prints the sum of all even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
 */


int main(void)
{

int a = 1, b = 2, next, even_sum = 0;

while (a <= 4000000)
{
if (a % 2 == 0)
{
even_sum += a;
}

next = a + b;
a = b;
b = next;
}

printf("%d\n", even_sum);

return (0);
}
