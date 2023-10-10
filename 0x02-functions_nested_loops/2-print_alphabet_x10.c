#include "main.h"

/**
 * print_alphabet_x10 - Check main
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
char alphabet = 'a';
int i = 0;

while (i < 10)
{
alphabet = 'a';

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
i++;
}
}
