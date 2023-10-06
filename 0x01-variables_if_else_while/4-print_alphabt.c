#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
}
putchar('\n');
return (0);
}
