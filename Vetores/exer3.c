#include <stdio.h>

int pa(int inicio, int termo, int vetor[10])
{
	int count;

	for (count = 0; count < 10; count ++)
	{
		if(count == 0)
			vetor[count] = inicio;
		else
			vetor[count] = vetor[count - 1] + termo;
	}
		 
}

void exibir(int vetor[10])
{
	int count;

	for(count = 0; count < 10; count++)
		printf("%d ", vetor[count]);

}
int main(void){
	int vetor[10],
		inicio,
		termo;

	printf("Digite o primeiro número da Progressão Aritmetica\n");
	scanf("%d", &inicio);

	printf("Digite o valor do termo geral da PA\n");
	scanf("%d", &termo);

	pa(inicio, termo, vetor);

	printf("Progressao Aritmetica: \n");
	exibir(vetor);

	printf("\n");

}