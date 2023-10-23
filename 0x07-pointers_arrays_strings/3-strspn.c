#include "main.h"


/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int d;

for (i = 0; s[i] != '\0'; i++)
{
d = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
d = 1;
break;
}
}
if (!d)
{
break;
}
}
return (i);
}
