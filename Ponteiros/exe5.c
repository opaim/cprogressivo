#include <stdio.h>

int main(void)
{
	int teste[10];

	printf("Imprimindo o vetor 'teste': %d\n", teste);
	printf("Imprimindo o endereço do primeiro elemento: %d\n", &teste[0]);

	return 0;
}