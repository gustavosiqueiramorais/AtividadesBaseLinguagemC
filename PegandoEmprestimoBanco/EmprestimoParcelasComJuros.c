#include <stdio.h>
#include <stdlib.h>
int main(){
    //declarar as variaveis
    float parcelas,juros,vlemprestimo,vlfinal;
    //usuario adiciona valor as variaveis
    printf("Digite o valor desejado do emprestimo: ");
    scanf("%f", &vlemprestimo);
    printf("Digite o numero de parcelas a pagar: ");
    scanf("%f",&parcelas);
    //calculo do juros de 20%
    juros = (vlemprestimo*20)/100;
    vlfinal = (juros+vlemprestimo)/parcelas;
    //exibir o resultado
    printf("Voce devera pagar %4.0f parcelas de %4.0f reais cada", parcelas, vlfinal);
    return 0;
}