// Implement a C program to find the second largest element in an array.

#include <stdio.h>

int main() {
    int n;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int secondMax = -999999; // very small number

    // Find max and second max
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if(secondMax == -999999) {
        printf("No second largest element (all elements may be equal).\n");
    } else {
        printf("Second largest element: %d\n", secondMax);
    }

    return 0;
}