#include "main.h"

/**
 *_strcmp - compares two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *
 *Return: value less than 0 if string is less than the other.
 *value greater than 0 if string is greater than the other.
 *0 if strings are equal.
 */

int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (s1[i] - s2[i]);
}
