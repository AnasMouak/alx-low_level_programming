#include <stdio.h>
#include "main.h"

/**
 * main - Function main entry
 * Program that prints _putchar, followed by a new line
 * Return: always 0 (success)
 */

int main(void)
{
char a[] = "_putchar";
int i = 0;

for (i = 0; i <= 7; i++)
{
_putchar(a[i]);

}
_putchar('\n');
return (0);
}
