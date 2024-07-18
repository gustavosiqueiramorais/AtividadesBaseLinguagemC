#include <stdio.h>
#include <stdlib.h>
int main(){
    float peso,altura,imc;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu peso atual: ");
    scanf("%f", &peso);
    
    imc = peso / (altura * altura);
    
    if(imc<23){
        printf("Voce esta no peso ideal");
    }else{
        printf("Voce esta acima do peso, pratique exercicios");
    }
    return 0;
}