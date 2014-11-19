#include <stdio.h>
#include <string.h>
#define DIM 5

typedef struct 
{
	char nomeBanda[50], estilo[30];
	int numIntegrantes, rankPos;

}BANDA;

void preenche(BANDA *banda)
{
	int count;

	for(count=0; count < DIM; count++){

		__fpurge(stdin);
		printf("\nNome %dº Banda: ", count+1);
		scanf("%[^\n]", &banda[count].nomeBanda);
		__fpurge(stdin);
		printf("\nEstilo de musica: ");
		scanf("%[^\n]", &banda[count].estilo);

		printf("\nNúmero de Integrantes: ");
		scanf("%d", &banda[count].numIntegrantes);

		printf("\nPosição no ranking de favoritas: ");
		scanf("%d", &banda[count].rankPos);
	}
}

void exibe(BANDA banda[])
{
	int count;

	for(count=0; count < DIM; count++){
		printf("\nNome da Banda: %s", banda[count].nomeBanda);
		printf("\nEstilo de Música: %s", banda[count].estilo);
		printf("\nNúmero de Integrantes: %d", banda[count].numIntegrantes);
		printf("\nPosição em Favoritas: %d\n", banda[count].rankPos);
	}
}

void exibePos(BANDA banda[])
{
	int pos, count;
	printf("\nDigite uma posição em favoritas para saber os dados da banda\n");
	scanf("%d", &pos);

	for(count=0; count < DIM; count++)
	{
		if(banda[count].rankPos == pos){
			printf("Nome da Banda: %s\n", banda[pos-1].nomeBanda);
			printf("Estilo: %s\n", banda[pos-1].estilo);
			printf("Numero e Integrantes: %d\n", banda[pos-1].numIntegrantes);
			printf("Posição em Favoritas: %d\n", banda[pos-1].rankPos);
		}
	}
}

void buscaEstilo(BANDA banda[]){
	int count;
	char estilo[30];

	__fpurge(stdin);
	printf("\nDigite um estilo de música: ");
	scanf("%[^\n]", &estilo);

	for(count=0; count < DIM; count++)
	{
		if(strcmp(banda[count].estilo,estilo) == 0){
			printf("Nome da Banda: %s\n", banda[count].nomeBanda);
			printf("Estilo: %s\n", banda[count].estilo);
			printf("Numero e Integrantes: %d\n", banda[count].numIntegrantes);
			printf("Posição em Favoritas: %d\n", banda[count].rankPos);
		}
	}

}

void buscaNome(BANDA banda[]){
	int count, isIn=0	;
	char nome[30];

	__fpurge(stdin);
	printf("\nDigite um nome de banda: ");
	scanf("%[^\n]", &nome);

	for(count=0; count < DIM; count++)
	{
		if(strcmp(banda[count].nomeBanda,nome) == 0){
			printf("Esta Banda está entre as favoritas na posição: %d\n", banda[count].rankPos);
			isIn++;
		}		
	}
	if (isIn == 0)
		printf("Esta banda nao esta entre as favoritas\n");

} 

int main(void)
{
	char opc;

	BANDA banda[DIM];
	preenche(banda);
	system("clear");
	
	while (opc != 's'){
		__fpurge(stdin);
		printf("digite uma opção:\n1: Exibe Posição\n2: Busca por Estilo\n3: Busca por Nome da Banda\ns: sair\n");
		scanf("%c", &opc);
		switch(opc){
			case '1':
				exibePos(banda);
				break;
			case '2':
				buscaEstilo(banda);
				break;
			case '3':
				buscaNome(banda);
				break;
			case 's':
				return 0;
				break;
			default:
				printf("opção inválida\n");
		}

	}


}