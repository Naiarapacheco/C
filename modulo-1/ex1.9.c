#include <stdio.h>
#include <stdlib.h>


int main (void){
    int base;
    int altura;

    int calcularArea; 

    printf("Valor da base: ");
    scanf("%d", &base);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    calcularArea = base * altura / 2;

    printf("Area = %d", calcularArea);

    return 0;
}