#include "main.h"

/**
 * _islower - Check Main
 *@c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
char alphabet = 'a';

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
_putchar('\n');
return (0);
}
