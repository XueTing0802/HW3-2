#include <stdio.h>

char change_case(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    else if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    else {
        return c;
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf_s("%c", &c);

    char result = change_case(c);
    printf("Changed case: %c\n", result);

    return 0;
}