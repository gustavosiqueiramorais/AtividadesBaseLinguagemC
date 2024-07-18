#include <stdio.h>
#include <stdlib.h>
int main(){
    float peso,altura,imc;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu peso atual: ");
    scanf("%f", &peso);
    
    imc = peso / (altura * altura);
    
    if(imc>=18 & imc<=23){
        printf("Parabens, voce esta no peso ideal");
    }else{
        printf("Voce nao esta na faixa de peso ideal para saude, pratique exercicios");
    }
    return 0;
}