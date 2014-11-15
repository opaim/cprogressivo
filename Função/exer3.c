#include <stdio.h>

float conv2far(float n);
float conv2cel(float n);

void main(){
	float temp;
	char unidade;

	printf("Escolha a unidade de entrada da temperatura(Celsius(c) ou Farenheit(f)): \n");
	scanf("%c", &unidade);

	printf("Informe o valor a ser convertido\n");
	scanf("%f", &temp);

	switch(unidade){
		case 'c':
			printf("A Temperatura em Farenheit ´e: %.2f\n", conv2far(temp));
			break;
		case 'f':
			printf("A Temperatura em Celsius ´e: %.2f\n", conv2cel(temp));
			break;
	}
}

float conv2far(float temp){
	return (temp * 1.8 +32);
}

float conv2cel(float temp){
	return ((temp - 32) / 1.8);
}