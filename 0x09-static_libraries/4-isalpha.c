#include "main.h"

/**
 * _isalpha - Check main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */

int _isalpha(int c)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'))
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
