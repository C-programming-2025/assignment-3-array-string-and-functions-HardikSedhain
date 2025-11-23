// Write a recursive function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.

#include <stdio.h>
#include <string.h>

// Recursive function to check palindrome
int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1; // Base case: all characters matched
    }
    if (str[start] != str[end]) {
        return 0; // Characters don't match
    }
    return isPalindrome(str, start + 1, end - 1); // Recursive case
}

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    if (isPalindrome(str, 0, length - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}