#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero,resultado;
    printf("Digite um numero inteiro qualquer: ");
    scanf("%i", &numero);
    resultado = numero %2;
    if (resultado == 0)
    {
        printf("O numero %i e par", numero);
    } else
    {
        printf("O numero %i e impar", numero);
    }
    return 0;
}
