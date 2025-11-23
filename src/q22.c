// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.

#include <stdio.h>

// Recursive function to calculate nth Fibonacci number
unsigned long long calculateFibonacci(int n) {
    if (n < 0) {
        return 0; // Undefined for negative numbers
    }
    if (n == 0) return 0; // 0th Fibonacci number
    if (n == 1) return 1; // 1st Fibonacci number
    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    printf("Enter the position (n) in Fibonacci sequence: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        unsigned long long fib = calculateFibonacci(n);
        printf("The %dth Fibonacci number is: %llu\n", n, fib);
    }

    return 0;
}