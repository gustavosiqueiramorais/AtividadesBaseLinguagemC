#include <stdio.h>
#include <stdlib.h>
int main(){
	int numero,novonumero,centena,dezena,unidade;
	
	printf("Digite um numero inteiro de 3 algarismos:");
	scanf("%i", &numero);
	
	centena = numero / 100;
	dezena = (numero % 100) / 10;
	unidade = (numero % 100) % 10;
	
	novonumero = unidade * 100 + dezena * 10 + centena;
	
	printf("O inverso do numero escolhido e igual a:%i",novonumero);
	return 0;
}
