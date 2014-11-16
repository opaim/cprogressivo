#include <stdio.h>

typedef struct 
{
	char modelo[30];
	float potenciaMotor;
	int anoFabricacao, numPortas;
}CARRO;

void exibe(CARRO car)
{
	printf("\n\tExibindo carro\n\n");
	printf("Modelo: %s\n", car.modelo);
	printf("Potencia do Motor: %.1f\n", car.potenciaMotor);
	printf("Ano: %d\n", car.anoFabricacao);
	printf("Numero de Portas: %d\n", car.numPortas);
}

void preenche (CARRO *car)
{
	printf("Modelo do Carro: ");
	scanf("%[^\n]", &car->modelo);

	printf("Potencia do motor: ");
	scanf("%f", &car->potenciaMotor);

	printf("Ano de fabricação: ");
	scanf("%d", &car->anoFabricacao);

	printf("Numero de Portas: ");
	scanf("%d", &car->numPortas);
}

int main(void)
{
	CARRO(fusca);
	preenche(&fusca);
	exibe(fusca);
}