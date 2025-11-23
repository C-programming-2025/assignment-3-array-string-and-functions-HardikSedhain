// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.

#include <stdio.h>

// Function to calculate power
int calculatePower(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int power = calculatePower(base, exponent);
    printf("%d raised to the power %d is: %d\n", base, exponent, power);

    return 0;
}