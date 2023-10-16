#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void) 
{
char validChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int numValidChars = sizeof(validChars) - 1;
int i;

srand(time(NULL));

printf("Generated Password: ");

for (i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % numValidChars;
putchar(validChars[index]);
}

printf("\n");

return (0);
}
