//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>

// Recursive function to count occurrences of a character
int countOccurrences(char str[], char ch, int index) {
    if (str[index] == '\0' || str[index] == '\n') {
        return 0; // Base case: end of string
    }
    if (str[index] == ch) {
        return 1 + countOccurrences(str, ch, index + 1); // Current char matches
    } else {
        return countOccurrences(str, ch, index + 1); // Current char doesn't match
    }
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int occurrences = countOccurrences(str, ch, 0);
    printf("The character '%c' occurs %d times in the string.\n", ch, occurrences);

    return 0;
}