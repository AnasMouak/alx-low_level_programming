#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
long long number = 612852475143;
long long largestPrime = -1;

while (number % 2 == 0)
{
largestPrime = 2;
number /= 2;
}
for (long long i = 3; i * i <= number; i += 2)
{
while (number % i == 0)
{
largestPrime = i;
number /= i;
}
}
if (number > 1)
{
largestPrime = number;
}
printf("%lld\n", largestPrime);

return (0);
}
