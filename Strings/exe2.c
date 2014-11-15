#include <stdio.h>

int main()
{
	char nome[21], sobrenome[21];

	printf("Primeiro Nome: ");
	scanf("%s", nome);

	printf("Ultimo Sobrenome: ");
	scanf("%s", sobrenome);

	printf("Olá Senhor %s, %s. Bem vindo ao curso C Progressivo.\n", sobrenome, nome);

	return 0;
}