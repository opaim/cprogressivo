#include <stdio.h>

int main()
{
	int lixo[10];
	int indice;

	for(indice = 0; indice < 11; indice++)
		printf("Lixo na posiçao %d: %d\n", indice, lixo[indice]);
}