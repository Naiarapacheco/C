#include <stdio.h>
#include <stdlib.h>

int main (void){
    float valorRaio;
    float diametro;
    float circunferencia;
    float area;

    printf("Valor do raio do circulo: ");
    scanf("%f", &valorRaio);

    diametro = valorRaio * 2;
    circunferencia = 2 * 3.141592 * valorRaio;
    area = 3.141592 * (valorRaio * valorRaio);

    printf("Diametro = %.2f\n", diametro);
    printf("Circunferencia = %.2f\n", circunferencia);
    printf("Area = %.2f", area);

    return 0;
}