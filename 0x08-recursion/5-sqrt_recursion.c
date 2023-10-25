#include "main.h"

/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@n: number to find sqrt of.
  *
  *Return: squareroot of n.
  */

int _sqrt_recursion(int n)
{
return (_another_function(n, 0));
}

/**
  *_another_function - checks if sqrt of number exists
  *@n: number.
  *@i: possible sqrt of number.
  *
  *Return: sqrt of number or -1 for error.
  */

int _another_function(int n, int i)
{
if (n  == 1 || n == 0)
{
return (n);
}
if (n < 0)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_another_function(n, i + 1));
}
