#include "main.h"
#include <stdio.h>

/**
 * _abs - Check main
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number i
 */

int _abs(int i)
{

if (i < 0)
{
return (-i);
}
else
{
return (i);
}
_putchar('\n');
return (0);
}
