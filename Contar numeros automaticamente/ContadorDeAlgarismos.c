#include <stdio.h>
#include <stdlib.h>
int main(){

    int numero,i;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%i",&numero);

    i = 0;

    printf("Vamos contar ate o numero %i\n",numero);

    while (i<=numero)
    {
        printf("Numero %i\n",i);
        i++;
    }
    
    return 0;
}