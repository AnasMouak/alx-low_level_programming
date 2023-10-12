#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
long number = 612852475143;
long divisor;

while (divisor < (number / 2))
{
if ((number % 2) == 0)
{
number /= 2;
continue;
}
for (divisor = 3; divisor < (number / 2); divisor += 2)
{
if (number % divisor == 0)
{
number /= divisor;
}
}
}
printf("%ld\n", number);

return (0);
}
