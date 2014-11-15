#include <stdio.h>

#define DIM 5

void recebe(int original[][DIM])
{
	int linha,
		coluna;
	for(linha = 0; linha < DIM; linha++)
		for(coluna = 0; coluna < DIM; coluna++)
		{
			printf("Digite o elemento [%d] [%d]:", linha+1, coluna+1);
			scanf("%d", &original[linha][coluna]);
		}
}

void copiar(int copia[][DIM], int original[][DIM])
{
	int linha,
		coluna;

	for(linha = 0; linha < DIM; linha++)
		for(coluna = 0; coluna < DIM; coluna++)
			copia[linha][coluna] = original[linha][coluna];
}

void dobrar(int dobrado[][DIM], int original[][DIM])
{
	int linha,
		coluna;

	for(linha = 0; linha < DIM; linha++)
		for(coluna = 0; coluna < DIM; coluna++)
			dobrado[linha][coluna] = 2 * original[linha][coluna];
}	

void exibir(int matriz[][DIM])
{
    int linha,
        coluna;

    for(linha = 0 ; linha < DIM ; linha++)
    {
        for(coluna = 0 ; coluna < DIM ; coluna++)
            printf("%3d ", matriz[linha][coluna]);

        printf("\n");
    }
}


int main(void)
{
	int original[DIM][DIM],
		copia[DIM][DIM],
		dobrado[DIM][DIM];

	recebe(original);
	copiar(copia, original);
	dobrar(dobrado, original);

	printf("Matiz Original: \n");
	exibir(original);

	printf("Matriz Copiada: \n");
	exibir(copia);

	printf("Matriz Dobrada: \n");
	exibir(dobrado);

}