#include <stdio.h>
#include <stdlib.h>
#define DIM 3

void recebe(char matriz[][DIM])
{
	int linha, coluna;
	char marcador;

	
		printf("Digite a coordenada (linha coluna):\n");
		scanf("%d %d %c", &linha, &coluna, &marcador);
		if(matriz[linha][coluna] == 'x' || matriz[linha][coluna] == 'o'){
			printf("Erro tente de novo!\n");
			recebe(matriz);
		}
		else{			
			matriz[linha][coluna] =  marcador;
		}

}

void exibe(char matriz[][DIM])
{
	int linha, coluna;
    
    system("clear");

	for(linha = 0; linha < DIM; linha++)
	{
		for(coluna = 0; coluna < DIM; coluna++)
		{
			printf("%3c ", matriz[linha][coluna]);
		}

		printf("\n");
	}

}

int main(void)
{
	char matriz[DIM][DIM] = { {'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'} };
	int choice='1';

	exibe(matriz);
	
	do{
		
		recebe(matriz);
		exibe(matriz);
		printf("continuar (1/0):\n");
		scanf("%i", &choice);
	}while(choice != 0);

}