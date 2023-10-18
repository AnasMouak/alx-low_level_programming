#include "main.h"

/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */

char *cap_string(char *s)
{
int i;
int n = 0;

while (s[n] == '\0')
{
n++;
}


for (i = 0; s[i] != '\0'; i++)
{

if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
continue;
}

if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '.' || s[i] == ','
|| s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
s[i] == ')' || s[i] == '{' || s[i] == '}')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
continue;
}
}
}
return (s);
}
