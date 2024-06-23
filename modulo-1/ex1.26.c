#include <stdio.h>
#include <stdlib.h>

int main (void){
    float grausCelsius;

    float grausCelsiusToFahrenheit;

    printf("Temperatura em graus celsius: ");
    scanf("%f", &grausCelsius);

    grausCelsiusToFahrenheit =  1.8 * grausCelsius + 32;

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", grausCelsius, grausCelsiusToFahrenheit);

    return 0;
} 