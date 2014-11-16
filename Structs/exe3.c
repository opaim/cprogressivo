#include <stdio.h>

typedef struct carro
{
	char modelo[30];
	float potenciaMotor;
	int anoFabricacao, numPortas;

}CARRO;

void exibe(CARRO car)
{
	printf("Modelo: %s\n", car.modelo);
	printf("potenciaMotor: %.f\n", car.potenciaMotor);
	printf("Ano de Fabricação: %d\n", car.anoFabricacao);
	printf("Número de Portas: %d\n", car.numPortas);
}

int main(void){
	CARRO fusca = {"Fusca Preto", 1.5, 74, 2};
	exibe(fusca);

	return 0;
}