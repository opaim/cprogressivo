#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *nums = (int *) malloc(sizeof(int));
	int count, qtdNum, total=0;

	printf("\ninforme quantos numeros pretende calcular: ");
	scanf("%d", &qtdNum);

	for(count=0; count < qtdNum; count++){
		printf("Digite o %dº numero: \n", count+1);
		scanf("%d", &nums[count]);
		total += nums[count];
	}

	printf("Á media dos numeros digitados é: %d\n", (total/qtdNum));

}