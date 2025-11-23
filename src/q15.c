// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>

// Function to count occurrences of a character in a string
int countOccurrences(char str[], char ch) {
    int count = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int occurrences = countOccurrences(str, ch);
    printf("The character '%c' occurs %d times in the string.\n", ch, occurrences);

    return 0;
}