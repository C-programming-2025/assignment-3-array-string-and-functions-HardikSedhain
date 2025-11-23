// Write a C program to concatenate two strings without using the built-in string functions.

#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if present
    if (str1[i] != '\0' && str1[i] != '\n') {
        while (str1[i] != '\0' && str1[i] != '\n') {
            result[i] = str1[i];
            i++;
        }
    }

    // Append second string
    while (str2[j] != '\0' && str2[j] != '\n') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0'; // Null-terminate the concatenated string

    printf("Concatenated string: %s\n", result);

    return 0;
}
