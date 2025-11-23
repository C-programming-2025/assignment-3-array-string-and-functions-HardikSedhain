// Implement a C program to reverse a string.

#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // null-terminate the reversed string

    printf("Reversed string: %s\n", reversed);

    return 0;
}