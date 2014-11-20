#include <stdio.h>

int main(void){
	char url[]="notas.txt";
	float nota,
		media=0.0;

	FILE *arq;

	arq = fopen(url, "a");

	if(arq==NULL)
		printf("\nErro ao abrir arquivo %s. ", url);
	else{
		printf("Nota de Matematica: \n");
		scanf("%f", &nota);
		fprintf(arq, "Matemática: %.2f\n", nota);
		media += nota;

		printf("Nota de Física: \n");
		scanf("%f", &nota);
		fprintf(arq, "Fìsica: %.2f\n", nota);
		media += nota;

		printf("Nota de Química: \n");
		scanf("%f", &nota);
		fprintf(arq, "Quimica: %.2f\n", nota);
		media += nota;

		media /= 3;
		fprintf(arq, "Media Final: %.2f\n", media);
	}
	fclose(arq);

	return 0;
}