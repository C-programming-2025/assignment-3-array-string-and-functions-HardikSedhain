// Write a recursive function named calculateSumOfDigits that takes an integer n as input and returns the sum of its digits.

#include <stdio.h>

// Recursive function to calculate sum of digits
int calculateSumOfDigits(int n) {
    if (n < 0) n = -n; // Handle negative numbers
    if (n == 0) {
        return 0; // Base case
    }
    return (n % 10) + calculateSumOfDigits(n / 10); // Recursive case
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int sum = calculateSumOfDigits(num);
    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}