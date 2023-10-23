#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring or
 *         NULL if substring is not found
*/


char *_strstr(char *haystack, char *needle)
{
int i;
int j;

for (i = 0; haystack[i] != '\0'; i++)
{
int d = 1;
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
d = 1;
break;
}
}
if (d)
{
return (haystack + i);
}
}
return (0);
}
