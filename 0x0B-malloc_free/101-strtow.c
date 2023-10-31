#include <stdlib.h>
#include "main.h"

/**
 * wordcount - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int wordcount(char *s)
{
int i;
int countw = 0;
int inw = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
{
inw = 0;
}
else
{
if (!inw)
{
inw = 1;
countw++;
}
}
}
return (countw);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
int i, words, k = 0, c = 0, start, end;
char **s, *tmp;
int size = 0;

if (str == 0 || *str == '\0')
{
return (0);
}
while (str[size] != '\0')
{
size++;
}
words = wordcount(str);

s = (char **) malloc ((words + 1) * sizeof(char));

if (s == 0)
{
return (0);
}

for (i = 0; i < size; i++)
{

if (str[i] == '\0' || str[i] == ' ')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == 0)
{
return (0);
}
while (start < end)
{
*tmp++ = str[start++];
}
*tmp = '\0';
s[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
{
start = i;
}
}
s[k] = '\0';
return (s);
}
