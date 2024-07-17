#include <stdio.h>
#include <stdlib.h>
int main(){
    //declarar as variaveis
    float tempfarenheit;
    //usuario adiciona valor as variaveis
    printf("Digite a temperatura desejada em Farenheit: ");
    scanf("%f", &tempfarenheit);
    //exibir o resultado
    printf("A temperatura descrita sera de %2.f graus celsius", (tempfarenheit - 32)/1.8);
    return 0;
}