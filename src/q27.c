// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.

#include <stdio.h>

// Recursive function to print a triangle
void printTriangle(int n) {
    if (n <= 0) {
        return; // Base case: no rows to print
    }

    // Recursive call to print the previous rows first
    printTriangle(n - 1);

    // Print n asterisks for the current row
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Triangle with %d rows:\n", n);
    printTriangle(n);

    return 0;
}