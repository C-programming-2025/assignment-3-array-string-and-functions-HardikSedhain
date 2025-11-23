// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.

#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long calculateFactorial(int n) {
    if (n < 0) {
        return 0; // Factorial not defined for negative numbers
    }
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1! = 1
    }
    return n * calculateFactorial(n - 1); // Recursive case
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long fact = calculateFactorial(num);
        printf("Factorial of %d is: %llu\n", num, fact);
    }

    return 0;
}