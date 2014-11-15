#include <stdio.h>
#define DIM 3
// Curso C Progressivo: www.cprogressivo.net
// o melhor durso de C online e gratuito
//Artigos, apostilas, tutoriais e 
//Video-aulas sobre a linguagem de programaçao C!

int main(){
	int matriz[DIM][DIM];
	int linha, coluna, traco = 0;

	//escrevnedo na Matriz
	for(linha = 0; linha < DIM; linha++)
		for(coluna = 0; coluna < DIM; coluna++)
		{
			printf("Elemento [%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}

		//imprimindo a matriz na tela
		for (linha = 0; linha < DIM; linha++)
		{
			for(coluna = 0; coluna < DIM; coluna++)
				printf("%3d", matriz[linha][coluna]);

			traco += matriz[linha][linha];
			printf("\n"); // Ap´os cada linha se impressa, um salto na linha
		}

		printf("\nTraco da matriz: %d\n", traco);
}