#include <stdio.h>
#include <stdlib.h>
int main(){
    int inicio,fim,contador;

    printf("Digite o inicio da contagem: ");
    scanf("%i",&inicio);

    printf("Digite o fim da contagem: ");
    scanf("%i",&fim);

    if(inicio<fim){
        contador = inicio;
        while(contador<=fim){
            printf("Numero %i\n",contador);
            contador++;
        }
    } else {
        contador = inicio;
        while(contador>=fim){
            printf("Numero %i\n",contador);
            contador--;

        }
    }
    return 0;
}