#include <stdio.h>

int main(){
	char lixo[10];
	int indice;

	for(indice = 0; indice < 11; indice++)
		printf("Lixo na posiçao %d: %c\n", indice, lixo[indice]);
}