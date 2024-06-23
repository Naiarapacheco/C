#include <stdio.h>
#include <stdlib.h>

int main (void){
    float base;
    float altura;

    float calcularArea;

    printf("Valor da base: ");
    scanf("%f", &base);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    calcularArea = base * altura / 2;

    printf("Area = %.2f", calcularArea);

    return 0;
}