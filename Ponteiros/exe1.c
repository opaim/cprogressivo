#include <stdio.h>

int main (void)
{
	int numero1 = 1,
		numero2 = 2;
	char letra1 = 'a',
		 letra2 = 'b';

	printf("Numero1: \n");
	printf("Valor da variavel numero1: %d\n", numero1);
	printf("Ponteiro para o endereço da variável numero1: %d\n\n", &numero1);


	printf("Numero2: \n");
	printf("Valor da variavel numero2: %d\n", numero2);
	printf("Ponteiro para o endereço da variável numero2: %d\n\n", &numero2);


	printf("Letra2: \n");
	printf("Valor da variavel letra1: %c\n", letra1);
	printf("Ponteiro para o endereço da variável letra1: %d\n\n", &letra1);


	printf("Letra2: \n");
	printf("Valor da variavel letra2: %d\n", letra2);
	printf("Ponteiro para o endereço da variável letra2: %d\n\n", &letra2);

	printf("Alterando os valores... \n\n");

	numero1 = 2112;
	numero2 = 666;

	letra1 = 'A';
	letra2 = 'B';

	printf("Numero1: \n");
	printf("Valor da variavel numero1: %d\n", numero1);
	printf("Ponteiro para o endereço da variável numero1: %d\n\n", &numero1);


	printf("Numero2: \n");
	printf("Valor da variavel numero2: %d\n", numero2);
	printf("Ponteiro para o endereço da variável numero2: %d\n\n", &numero2);


	printf("Letra2: \n");
	printf("Valor da variavel letra1: %c\n", letra1);
	printf("Ponteiro para o endereço da variável letra1: %d\n\n", &letra1);


	printf("Letra2: \n");
	printf("Valor da variavel letra2: %d\n", letra2);
	printf("Ponteiro para o endereço da variável letra2: %d\n\n", &letra2);

	return 0;
}