#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * in lowercase, followed by a new line
 * Return: always 0 (success)
 */

void print_alphabet(void)

{
char alphabet = 'a';

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');

}
