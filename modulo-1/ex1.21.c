#include <stdio.h>
#include <stdlib.h>

int main (void){
    int numero;
    
    int sucessor;
    int antecessor;

    printf("Forneca um numero inteiro: ");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("Sucessor de 1992: %d\n", sucessor);
    printf("Antecessor de 1992: %d", antecessor);

    return 0;
}