#include <stdio.h>
#include <stdlib.h>


int main (void){
    int valorLargura;
    int valorAltura;
    
    int perimetro;
    int area;

    //entrada
    printf("Valor da largura: ");
    scanf("%d", &valorLargura);
    printf("Valor da altura: ");
    scanf("%d", &valorAltura);

    //processamento
    perimetro = 2 * valorLargura + 2 * valorAltura;
    area = valorLargura * valorAltura;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);

    return 0;
}

