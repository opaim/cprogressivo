#include <stdio.h>

int teste(int a);

int main (void){
	int a = 1;

	printf("Valor inicial de 'a': %d\n\n", a);
	a=teste(a);
	printf("valor de 'a' apos receber o retorno da funçao: %d\n\n", a);
}

int teste(int a){
	a++;
	printf("Estou dentro da funçao! A Variavel foi alterada e aqui vale: %d\n", a);
	return a;
}