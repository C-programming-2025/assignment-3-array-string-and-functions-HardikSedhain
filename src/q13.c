// Write a function named findFactorial that takes an integer as input and returns its factorial.

#include <stdio.h>

// Function to calculate factorial
unsigned long long findFactorial(int n) {
    if (n < 0) {
        return 0; // Factorial is not defined for negative numbers
    }

    unsigned long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = findFactorial(num);
        printf("Factorial of %d is: %llu\n", num, result);
    }

    return 0;
}