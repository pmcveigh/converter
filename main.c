#include <stdio.h>

float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main() {
    int choice;
    float temperature, convertedTemperature;

    printf("Temperature Converter\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = celsiusToFahrenheit(temperature);
        printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = fahrenheitToCelsius(temperature);
        printf("Temperature in Celsius: %.2f\n", convertedTemperature);
    } else {
        printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
