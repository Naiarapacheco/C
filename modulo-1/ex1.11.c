#include <stdio.h>
#include <stdlib.h>

int main (void){
    int diagonalMaior;
    int diagonalMenor;

    int areaLosango;

    printf("Valor da diagonal maior: ");
    scanf("%d", &diagonalMaior);

    printf("Valor da diagonal menor: ");
    scanf("%d", &diagonalMenor);

    areaLosango = diagonalMaior * diagonalMenor / 2;

    printf("Area = %d", areaLosango);

    return 0;
}