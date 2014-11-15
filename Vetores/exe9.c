#include <stdio.h>

#define DIM 3

void preencher(int matriz[][DIM]){
	int linha, coluna;

	for(linha=0; linha<DIM; linha++)
		for(coluna=0; coluna < DIM; coluna++){
			printf("Entre com o elemtento matriz[%d][%d]\n", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
}
void exibir(int matriz[][DIM]){
	int linha, coluna;

	for (linha = 0; linha < DIM; linha++){
		for(coluna = 0; coluna < DIM; coluna++)
			printf("%3d ", matriz[linha][coluna]);
		printf("\n");
	}
		
}

int traco(int matriz[][DIM]){
	int count, traco=0;

	for(count = 0; count < DIM; count++)
		traco +=matriz[count][count];
	return traco;
}

int main(void){
	int matriz[DIM][DIM];

	preencher(matriz);
	exibir(matriz);

	printf("\nTraço da matriz: %d\n", traco(matriz));

	return 0;
}
