#include <stdio.h>

float media(float numeros[], int n)
{
	int count;
	float media=0.0;

	for (count = 0; count < n; count ++)
		media += numeros[count];

	return (media/n);
}

int main(void)
{
	float numeros[5];
	int count;

	for(count=0;count<5;count++){
		printf("Entre com o numero %d\n", count+1);
		scanf("%f", &numeros[count]);
	}

	printf("A Média destes numeros é: %.2f\n", media(numeros, 5));

	return 0;
}