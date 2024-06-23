#include <stdio.h>
#include <stdlib.h>

int main (void){
    float grausFahrenheit;
    
    float grausConvertidoPcelsius;

    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &grausFahrenheit);

    grausConvertidoPcelsius = (grausFahrenheit - 32) / 1.8;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", grausFahrenheit, grausConvertidoPcelsius);

    return 0;
}