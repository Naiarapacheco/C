#include <stdio.h>
#include <stdlib.h>

int main (void){
    float valorHora;
    float quantidadeAulas;
    float desconto;

    float salarioBruto;
    float salarioLiquido;

    printf("Valor da hora/aula: ");
    scanf("%f", &valorHora);

    printf("Quantidade de aulas: ");
    scanf("%f", &quantidadeAulas);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &desconto);

    salarioBruto = quantidadeAulas * valorHora;
    salarioLiquido = salarioBruto - (salarioBruto * (desconto / 100));

    printf("Salario Liquido: %.2f", salarioLiquido);

    return 0;
}