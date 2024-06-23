#include <stdio.h>
#include <stdlib.h>

int main (void){
    int ano_nascimento;
    int ano_atual;

    int idadeAproximada;

    printf("Ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Ano atual: ");
    scanf("%d", &ano_atual);

    idadeAproximada = ano_atual - ano_nascimento;

    printf("Idade aproximada: %d anos", idadeAproximada);

    return 0;
}