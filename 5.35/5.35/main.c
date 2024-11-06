#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, next;

    if (n == 0) {
        return a;
    }

    for (unsigned int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main() {
    unsigned int n;

    printf("Enter a number to find its Fibonacci: ");
    scanf_s("%u", &n);

    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));

    return 0;
}