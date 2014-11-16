#include <stdio.h>
#define DIM 5

int main(void){

	typedef struct
	{
		char nome[30];
		float matematica, fisica, media;
	}Alunos;

	Alunos alunos[DIM];
	int count;

	for (count = 0; count < DIM; count++){
		
		__fpurge(stdin);
		printf("\nNome do aluno %d: ", count+1);
		gets(alunos[count].nome);

		printf("\nNota de Matemática: ");
		scanf("%f", &alunos[count].matematica);

		printf("\nNota de Física: ");
		scanf("%f", &alunos[count].fisica);

		alunos[count].media = (alunos[count].matematica + alunos[count].fisica)/2;	
	}

	printf("Exibindo nomes e medias: \n");

	for(count=0; count < DIM; count++){
		printf("Aluno: %d\n", count+1);
		printf("Nome: %s\n", alunos[count].nome);
		printf("Média: %.2f\n", alunos[count].media);
	}

	return 0;
}