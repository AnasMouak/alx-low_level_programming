#include "main.h"

/**
 *len_st- returns lenght of a string.
 *@s: pointer to string.
 *
 *Return: lenght of string.
 */

int len_st(char *s)
{
if (*s != '\0')
{
return (1 + len_st(s + 1));
}
return (0);
}

/**
  *is_palindrome - checks if string is palindrome or not.
  *@s: pointer to string.
  *
  *Return: 1 if string is palindrome 0 if not.
  */

int is_palindrome(char *s)
{
int j;
j = len_st(s);

return (help_p(s, 0, j - 1));
}

/**
  *help_p - check if palindrome.
  *@s: pointer to string.
  *@start: first index.
  *@end: lastIndex.
  *
  *Return: 0 if not palindrome, 1 if palindrome.
  */

int help_p(char *s, int start, int end)
{

if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (help_p(s, start + 1, end - 1));
}
