#include <stdio.h>

int fatorial(int n){
	if (n == 1)
		return 1;
	else
		return (n * fatorial(n-1));
}

int main (){
	int n;
	printf("Digite um numero inteiro para obter seu fatorial:\n");
	scanf("%d", &n);

	printf("Soma: %d\n", fatorial(n));
}