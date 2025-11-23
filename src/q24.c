// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.

#include <stdio.h>

// Recursive function to calculate power
long long calculatePower(int base, int exponent) {
    if (exponent < 0) {
        return 0; // For simplicity, negative exponents not handled
    }
    if (exponent == 0) {
        return 1; // Base case: any number^0 = 1
    }
    return base * calculatePower(base, exponent - 1); // Recursive case
}

int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    long long result = calculatePower(base, exponent);
    printf("%d raised to the power %d is: %lld\n", base, exponent, result);

    return 0;
}