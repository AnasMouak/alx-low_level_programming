#include "main.h"

/**
 * print_last_digit - Check main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */

int print_last_digit(int r)
{
int last;

if (r < 0)
{
last = -1 * (r % 10);
}
else
{
last = r % 10;
}

_putchar(last + '0');
return (last);

return (0);
}
