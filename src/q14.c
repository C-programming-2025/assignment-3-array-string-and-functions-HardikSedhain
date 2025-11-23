// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature.

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float convertTemperature(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = convertTemperature(celsius);
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}