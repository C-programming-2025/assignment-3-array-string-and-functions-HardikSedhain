// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to print all prime numbers from 1 to n
void findPrimeNumbers(int n) {
    printf("Prime numbers from 1 to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    findPrimeNumbers(n);

    return 0;
}