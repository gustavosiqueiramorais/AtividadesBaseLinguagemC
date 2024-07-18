#include <stdio.h>
#include <stdlib.h>
int main(){
    float n1,n2,media;

    printf("Digite o valor da sua primeira nota: ");
    scanf("%f",&n1);

    printf("Digite o valor da sua segunda nota: ");
    scanf("%f",&n2);

    media = (n1+n2) /2;

    printf("A sua media final e de %2.f pontos\n",media);
    if(media>=7){
        printf("Voce foi aprovado, parabens");
    }else{
        printf("Voce foi reprovado,tente novamente");
    }
    return 0;
}