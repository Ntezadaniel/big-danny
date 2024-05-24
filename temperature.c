#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    int choice;
    float temperature, converted_temp;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        converted_temp = celsius_to_fahrenheit(temperature);
        printf("The temperature in Fahrenheit is: %.2f°F\n", converted_temp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        converted_temp = fahrenheit_to_celsius(temperature);
        printf("The temperature in Celsius is: %.2f°C\n", converted_temp);
    } else {
        printf("not choice. Please choose 1 or 2.\n");
    }

    return 0;
}
