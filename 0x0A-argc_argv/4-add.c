#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
int result = 0;
int i;
int j;

if (argc > 1)
{
for (j = 1; j < argc; j++)
{
if (*argv[j] >= 'a' && *argv[j] <= 'z')
{
printf("Error\n");
return (1);
}
}
for (i = 1; i < argc; i++)
{
result += atoi(argv[i]);
}
printf("%d\n", result);
}

else
{
printf("0\n");
}

return (0);
}
