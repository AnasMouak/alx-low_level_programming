#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


bool isPositiveInteger(const char *str)
    {
    if (str == NULL || *str == '\0') {
        return false;
    }

    while (*str) {
        if (!isdigit(*str))
	{
            return false;
        }
        str++;
    }

    return true;
}

unsigned long long multiplyPositiveNumbers(unsigned long long num1, unsigned long long num2)
{
    return num1 * num2;
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!isPositiveInteger(argv[1]) || !isPositiveInteger(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    unsigned long long num1 = strtoull(argv[1], NULL, 10);
    unsigned long long num2 = strtoull(argv[2], NULL, 10);

    unsigned long long result = multiplyPositiveNumbers(num1, num2);

    printf("%llu\n", result);

    return 0;
}
