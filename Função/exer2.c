#include <stdio.h>
#include <math.h>

int positivo(float n);
int nulo(float n);
float delta(float a, float b, float c);

int main(){
	float a, b, c;
	float sqrtdelta;

	printf("Digite o valor do coeficiente a: \n");
	scanf("%f", &a);
	if(nulo(a) == 1){
		printf("Valor de a invalido nao e uma equacao do segundo grau\n");
		return(1);
	}

	printf("Digite o valor do coeficiente b: \n");
	scanf("%f", &b);

	printf("Digite o valor do coeficiente c: \n");
	scanf("%f", &c);

	sqrtdelta = sqrt(delta(a, b, c));
	if ( positivo(delta(a, b, c)) == 1){
		printf("Raiz1: %.1f\n", (-b + sqrtdelta)/(2*a));
		printf("Raiz2: %.1f\n", (-b - sqrtdelta)/(2*a));	
	}
	else{
		 printf("Raíz 1: %.2f + i.%.2f\n", (-b)/(2*a), (sqrtdelta/(2*a)));
		 printf("Raíz 2: %.2f - i.%.2f\n", (-b)/(2*a), (sqrtdelta/(2*a)));

	}
}

int positivo(float n){
	if(n <= 0)
		return 0;
	else
		return 1;
}

int nulo(float n){
	if (!n)
		return 1;
	else 
		return 0; 
}

float delta(float a, float b, float c){
	return ((b*b)-(4 * a * c));
}