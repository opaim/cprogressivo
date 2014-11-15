#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sorteio(){
	srand(clock());
    return rand()%100+1;
}

void geraVetor(int vetor[10]){
	int count;

	for(count = 0; count < 10; count++)
		vetor[count] = sorteio();

}

void posicao(int palpite, int vetor[10]){
	int count;

	for(count = 0; count < 10; count++){
		if (palpite == vetor[count])
			printf("O numero está na posição %d\n", count);
	}
}

void exibe(int vetor[10])
{
	int count;

	for (count = 0; count < 10; count++)
	{
		printf("%d \n", vetor[count]);
	}
}



int main(void){
	int vetor[10];
	int palpite;

	geraVetor(vetor);
	exibe(vetor);

	printf("Digite seu palpite: \n");
	scanf("%d", &palpite);

	posicao(palpite, vetor);

}

