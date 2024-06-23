#include <stdio.h>
#include <stdlib.h>

int main(void){
    float diagonalMaior;
    float diagonalMenor;

    float areaLosango;

    printf("Valor da diagonal maior: ");
    scanf("%f", &diagonalMaior);

    printf("Valor da diagonal menor: ");
    scanf("%f", &diagonalMenor);

    areaLosango = diagonalMaior * diagonalMenor / 2;

    printf("Area = %.2f", areaLosango);

    return 0;
}