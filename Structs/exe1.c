#include <stdio.h>

int main(void)
{
	struct Alunos
	{
		char nome[30];
		float matematica, fisica, media;
	};

	struct Alunos alunos[5];

	int count;

	for(count=0; count < 5; count++){
		
		__fpurge(stdin);
		printf("Nome do ALuno %d: ", count+1);
		gets(alunos[count].nome);

		printf("\nNota de matematica: ");
		scanf("%f", &alunos[count].matematica);

		printf("\nNota de Fisica: ");
		scanf("%f", &alunos[count].fisica);

		alunos[count].media = (alunos[count].matematica + alunos[count].fisica)/2;
	}

	//Exibindo nomes e médias
	printf("Exibindos nomes e medias...\n");

	for(count=0; count < 5; count++){
		printf("Aluno %d: \n", count + 1);
		printf("Nome: %s\n", alunos[count].nome);
		printf("Media: %.2f\n", alunos[count].media);
	}

	return 0;
}