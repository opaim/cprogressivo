#include <stdio.h>

float main (void){
	float valor_i,
		  valor_f;
	int juros=0,
	    meses;

	printf("\nEntre com o valor inicial da divida\n");
		scanf("%f", &valor_i);
	printf("\nEntre com o  tempo em atraso\n");
		scanf("%d", &meses);

	switch(meses){
		case 5:
			juros++;
		case 4:
			juros++;
		case 3:
			juros++;
		case 2:
			juros++;
		case 1:
			juros++;
			break;
		default:
			printf("Voc^e nao digitou um valor v´alido\n");
	}

	printf("juros: %d%\n", juros);
	valor_f = ( (1 + (juros/100.0))*valor_i);
	printf("Valor final da divida: R$ %.2f\n", valor_f);
	printf("Valor dos juros: R$ %.2f\n", valor_f - valor_i);
}