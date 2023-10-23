#include <ctype.h>
#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
*/

void print_chessboard(char (*a)[8])
{
int i;
int j;
char vip[] = "rkbqkbkr";
char sold[] = "pppppppp";

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if (i >= 2 && i <= 5 && j >= 0 && j <= 7)
{
a[i][j] = ' ';
}
else if (i == 1)
{
a[i][j] = sold[j];
}
else if (i == 6)
{
a[i][j] = toupper(sold[j]);
}
else if (i == 7)
{
a[i][j] = toupper(vip[j]);
}
else
{
a[i][j] = vip[j];
}
}
}
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
