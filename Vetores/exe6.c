#include <stdio.h>
#define MAIORIDADE 18
const int aposentadoria = 65;
const int motorista = 16;

int main()
{
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);

	if( idade >= MAIORIDADE )
		printf("Voce ja pode dirigirn e se alistar\n");
	else
		if(idade >= motorista)
			printf("Voce pode dirigir, mas nao pode se alistar.\n");
		else
			printf("Voce nao pode dirigir nem se alistar\n");
	if( idade >= aposentadoria )
		printf("Voce ja pode se aposentar!\n");
}