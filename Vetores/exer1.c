#include <stdio.h>

void recebe(int vetor[10])
{
	int count;

	for(count=0; count < 10; count ++)
	{
		printf("Digite o %dº elemento do vetor\n", count+1);
		scanf("%d", &vetor[count]);
	}

}

int maior(int vetor[10]){
	int count,
		maior=0;

	for (count = 0; count < 10; count++)
	{
		if(vetor[count] >= maior)
			maior = vetor[count]; 
	}

	return maior;
}

int menor(int vetor[10]){
	int count,
		menor=0;

	for (count = 0; count < 10; count++)
	{
		if(vetor[count] <= menor)
			menor = vetor[count]; 
	}

	return menor;
}

void exibir(int vetor[10])
{
	int count;

	for (count = 0; count < 10; count++)
		printf("%d ", vetor[count]);
}

int main(void)
{
	int vetor[10];

	recebe(vetor);

	printf("Vetor:\n");
	exibir(vetor);

	printf("\nO Maior valor no vetor é : %d\n", maior(vetor)); 	
	printf("\nO Menor valor no vetor é : %d\n", menor(vetor));
}