include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: string to be reserved.
 */

void rev_string(char *s)
{
int i;
int n = 0;
char tmp;

while (s[n] != '\0')
{
n++;
}
for (i = 0; i < n / 2; i++)
{
tmp = s[n - i -1];
s[n - i - 1] = s[i];
s[i] = tmp;
}
}
