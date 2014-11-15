#include <stdio.h>

void teste(int a){
	a++;
	printf("Estou dentro da funçao! A variavel foi alterada eaqui dentro vale: a=%d\n\n", a);
}


void main(void){
	int num1 = 1;

	printf("Valor inicial de num1: %d\n\n", num1);
	teste(num1);
	printf("Valor de 'num1' apos ir para a funçao: %d\n", num1);
}