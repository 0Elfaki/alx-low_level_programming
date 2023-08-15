#include <stdio.h>

/**
 * main - fibonacci <3
 * finds and prints the first 98 Fibonacci numbers.
 * Purpose - no hardcode any Fibonacci number (except for 1 and 2)
 *
 * Return:  (Success)
 */

void print_fibonacci(int n) {
    unsigned int a = 1; // First Fibonacci number
    unsigned int b = 2; // Second Fibonacci number

    if (n >= 1) {
        printf("%u", a);
    }
    if (n >= 2) {
        printf(", %u", b);
    }

    for (int i = 3; i <= n; i++) {
        unsigned int c = a + b;
        printf(", %u", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main(void) {
    int n = 98; // Number of Fibonacci numbers to print
    print_fibonacci(n);
    return 0;
}
