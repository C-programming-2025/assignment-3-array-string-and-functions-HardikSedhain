// Write a recursive function named calculateGCD that takes two integers a and b as input and returns their greatest common divisor (GCD).

#include <stdio.h>

// Recursive function to calculate GCD
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a; // Base case: when b is 0, GCD is a
    }
    return calculateGCD(b, a % b); // Recursive case
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = calculateGCD(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}