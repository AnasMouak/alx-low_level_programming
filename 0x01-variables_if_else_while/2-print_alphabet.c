#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(tolower(alphabet));

}
putchar('\n');
return (0);
}
