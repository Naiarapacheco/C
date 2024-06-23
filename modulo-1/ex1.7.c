#include <stdio.h>
#include <stdlib.h>

int main(void){
    int valorLado;
    int perimetro;
    int area;

    printf("Valor do lado: ");
    scanf("%d", &valorLado);

    perimetro = 4 * valorLado;
    area = valorLado * valorLado;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);

    return 0;
}