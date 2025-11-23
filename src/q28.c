// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.

#include <stdio.h>
#include <string.h>

// Recursive function to convert integer to binary string
void calculateBinary(int n, char str[], int *index) {
    if (n == 0) {
        if (*index == 0) { // Handle case when n = 0
            str[(*index)++] = '0';
        }
        str[*index] = '\0';
        return;
    }

    // Recursive call for higher bits
    calculateBinary(n / 2, str, index);

    // Append current bit
    str[(*index)++] = (n % 2) + '0';
    str[*index] = '\0';
}

int main() {
    int n;
    char binary[100];
    int index = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    calculateBinary(n, binary, &index);

    printf("Binary representation of %d is: %s\n", n, binary);

    return 0;
}
