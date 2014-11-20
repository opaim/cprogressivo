#include <stdio.h>
#include <stdlib.h>

void lerNumeros(int *ptr){
	int count, add;
	FILE *arq;

	arq = fopen("numeros.txt", "a");

	printf("Deseja adicionar quantos números? \n");
	scanf("%d", &add);

	ptr = (int *) realloc(ptr, (add)*sizeof(int));

	if(ptr){
		for (count=0; count < add; count++){
			printf("Numero[%d]: \n", count +1);
			scanf("%d", &ptr[count]);
			fprintf(arq, "%d\n", ptr[count]);
  		}
	}
	else
	{
		printf("Espaço de memória insuficiente\n");
		free(ptr);
		exit(1);
	}
}


int main(void){
	char url[]="numeros.txt";	
	int *ptr=NULL, count;
	FILE *arq;

	arq = fopen(url, "a");

	if(arq == NULL)
		printf("Erro ao abrir o arquivo %s\n", url);
	else
		lerNumeros(ptr);
	return 0;	

}