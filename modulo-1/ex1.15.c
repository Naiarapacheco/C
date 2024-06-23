#include <stdio.h>
#include <stdlib.h>

int main (void){
    float valorLargura;
    float valorAltura;

    float perimetro;
    float area;

    printf("Valor da largura: ");
    scanf("%f", &valorLargura);

    printf("Valor da altura: ");
    scanf("%f", &valorAltura);

    perimetro =  2 * valorLargura + 2 * valorAltura;
    area = valorLargura * valorAltura;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);

    return 0;
}