#include <stdio.h>
#include <stdlib.h>

int main (void){
    float primeiroValor;

    printf("Entre com um valor qualquer: ");
    scanf("%f", &primeiroValor);

    printf("%f\n", primeiroValor);
    printf("%.2f\n", primeiroValor);
    printf("%.3f", primeiroValor);

    return 0;
}