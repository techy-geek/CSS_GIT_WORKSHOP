#include <stdio.h>

// TODO: Implement the conversion functions
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main() {
    int choice;
    float temp, convertedTemp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (choice == 1) {
        // TODO: Call celsiusToFahrenheit and display result
        printf("Conversion not implemented yet.\n");
    } else if (choice == 2) {
        // TODO: Call fahrenheitToCelsius and display result
        printf("Conversion not implemented yet.\n");
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// TODO: Implement the celsiusToFahrenheit function
float celsiusToFahrenheit(float celsius) {
    return 0.0; 
}

// TODO: Implement the fahrenheitToCelsius function
float fahrenheitToCelsius(float fahrenheit) {
    return 0.0; 
}
