#include <stdio.h>

int main(){
	int number[3],
	indice;

	for (indice = 0; indice <=2; indice++)
	{
		printf("\nEntre com um numero %d: ", indice+1);
		scanf("%d", &number[indice]);
	}

	for(indice=0; indice <= 2; indice++){
		printf("Numero %d = %d\n", indice+1, number[indice]);
	}
}