#include <stdio.h>
#include <stdlib.h>

int main (void){
    float numeroInput;
    float desconto;

    printf("Valor do produto:");
    scanf("%f", &numeroInput);

    desconto = numeroInput * (1 - 0.09);

    printf("Preco de venda com 9%% de desconto: %.2f", desconto);

    return 0;
}