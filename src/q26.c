// Write a recursive function named reverseString that takes a string as input and returns the reversed string.

#include <stdio.h>
#include <string.h>

// Recursive function to reverse a string in place
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return; // Base case: reached the middle
    }
    // Swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}