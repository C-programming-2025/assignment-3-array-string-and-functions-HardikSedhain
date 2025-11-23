Write a C program to find the length of a string without using the built-in string functions.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    // Calculate length manually
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}