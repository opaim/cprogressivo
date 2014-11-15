#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio();
void dicas(int x, int guess, int tentativas);

int main(void){
	int x, guess, tentativas;
	int quest = 1;

	do
	{
		x = sorteio();
		tentativas = 0;
		printf("Jogo de Advinhaçao\n");
		printf("Que numero vc acha que foi sorteado?\n");
		do{
			tentativas++; 
			scanf("%d", &guess);
			dicas(x, guess, tentativas);
		}while (guess != x);
	    printf("Deseja continuar?\n");
		scanf("%d", &quest);
	}while (quest == 1);		
}

int sorteio(){
	srand((clock());   
	return rand() % 1000;
}

void dicas(int x, int guess, int tentativas){
	if(guess == x)
			printf("Você acertou!!! com %d tentativas\n", tentativas);
	if (guess < x)
			printf("O numero é maior que %d! \n", guess);
	if (guess > x)
			printf("O numero é menor que %d! \n", guess);
}