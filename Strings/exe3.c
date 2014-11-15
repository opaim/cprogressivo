#include <stdio.h>

int main(void)
{
	char nome[31], sobrenome[31], nascimento[11];
	int idade;

	printf("Nome: ");
	gets(nome);

	printf("Sobrenome: ");
	gets(sobrenome);

	printf("Idade: ");
	scanf("%d", &idade);

	__fpurge(stdin);

	printf("Data de nascimento: ");
	gets(nascimento);

	printf("Nome Completo: %s %s\n", nome, sobrenome);
	printf("Idade: %d\n", idade);
	printf("Data de Nascimento: "); puts(nascimento);

	return 0;
}