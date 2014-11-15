#include <stdio.h>

int pg(int inicio, int termo, int seq[10])
{
	int count;


	for (count = 0; count < 10; count ++)
	{
		if(count == 0)
			seq[count] = inicio;
		else
			seq[count] = seq[count - 1] * termo;
	}
}

void exibir(int seq[10])
{
	int count;

	for(count = 0; count < 10; count++)
		printf("%d\n", seq[count]);
}

int main(void){
	int seq[10],
		inicio,
		termo;

	printf("Digite o primeiro número da PG\n");
	scanf("%d", &inicio);

	printf("Digite o valor do termo geral da PG\n");
	scanf("%d", &termo);

	pg(inicio, termo, seq);

	printf("Progressao Geométrica: \n");
	exibir(seq);

	printf("\n");

}