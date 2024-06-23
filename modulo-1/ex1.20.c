#include <stdio.h>
#include <stdlib.h>

int main (void){
    int primeiroNumero;
    int segundoNumero;

    int mediaAritmetica;

    printf("Primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Segundo numero: ");
    scanf("%d", &segundoNumero);

    mediaAritmetica = (primeiroNumero + segundoNumero) / 2;

    printf("Media aritmetica: %d", mediaAritmetica);

    return 0;
}