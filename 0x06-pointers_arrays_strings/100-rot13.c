#include "main.h"

/**
 *rot13 - encodes strings using rot13.
 *@s: pointer to string.
 *
 *Return: pointer to encoded string.
 */

char *rot13(char *s)
{
int i;
int j;
char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char encod[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 49; j++)
{
if (s[i] == letters[j])
{
s[i] = encod[j];
break;
}
}
}
return (s);
}
