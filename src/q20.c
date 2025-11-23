// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).

#include <stdio.h>

// Function to calculate GCD of two numbers
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = calculateGCD(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
