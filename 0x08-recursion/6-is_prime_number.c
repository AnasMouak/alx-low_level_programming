#include "main.h"

/**
  *is_prime_number - checks if number is prime or not.
  *@n: number to be checked.
  *
  *Return: 1 if number is prime.
  *0 if number is not prime.
  */

int is_prime_number(int n)
{
return (help_number(n, 2));
}

/**
  *help_number - returns 0 or 1.
  *@n: number being checked.
  *@i: possible factor of the number.
  *
  *Return: 0 if not prime, 1 if prime.
  */

int help_number(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (i * 1 == n)
{
return (1);
}
if (i * i == n || n % i == 0)
{
return (0);
}
return (help_number(n, i + 1));
}
