#include <stdio.h>
#include <stdlib.h>

int main (void){
    float valorLado;
    float perimetro;
    float area;

    printf("Valor do lado: ");
    scanf("%f", &valorLado);

    perimetro = 4 * valorLado;
    area = valorLado * valorLado;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);

    return 0;
}