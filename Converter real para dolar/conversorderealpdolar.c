#include <stdio.h>
#include <stdlib.h>
int main(){
    //declarar as variaveis
    float reais;
    //usuario adiciona valor as variaveis
    printf("Digite quantos reais voce possui: ");
    scanf("%f", &reais);
    //exibir o resultado.Cotação atual do dólar esta em 5.46
    printf("Voce pode comprar aproximadamente %2.f dolares com essa quantia", reais / 5.46);
    return 0;
}