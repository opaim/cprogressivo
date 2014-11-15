#include <stdio.h>

int teste(int a){
	a++;
	printf("Estou dentro da funçao! A variavel foi alterada, e aqui dentro vale: a=%d\n\n", a);
	return a;
}

int main(void){
	int a = 1;
	printf("Valor inicial de 'a': %d\n\n", a);
	a=teste(a);
	printf("Vlor final da 'a' apos receber o retorno da funcao: %d\n\n", a);
}
