#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "main.h"

void _puts(const char *str) {
    while (*str != '\0') {
        _putchar(*str);
        str++;
    }
    _putchar('\n'); // Add a newline character at the end
}

// Function to check if a string is a positive integer
bool isPositiveInteger(const char *str) {
    if (str == NULL || *str == '\0') {
        return false;
    }

    while (*str) {
        if (!isdigit(*str)) {
            return false;
        }
        str++;
    }

    return true;
}

// Function to multiply two positive numbers
unsigned long long multiplyPositiveNumbers(unsigned long long num1, unsigned long long num2) {
    return num1 * num2;
}

// Function to print an unsigned long long number using putchar
void printUnsignedLongLong(unsigned long long num) {
    if (num == 0) {
        _putchar('0');
        return;
    }

    char buffer[20]; // Max length for a 64-bit integer
    int index = 0;

    while (num > 0) {
        buffer[index++] = '0' + num % 10;
        num /= 10;
    }

    for (int i = index - 1; i >= 0; i--) {
        _putchar(buffer[i]);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        _puts("Error");
        return 98;
    }

    if (!isPositiveInteger(argv[1]) || !isPositiveInteger(argv[2])) {
        _puts("Error");
        return 98;
    }

    unsigned long long num1 = strtoull(argv[1], NULL, 10);
    unsigned long long num2 = strtoull(argv[2], NULL, 10);

    unsigned long long result = multiplyPositiveNumbers(num1, num2);

    printUnsignedLongLong(result);
    _putchar('\n');

    return 0;
}
