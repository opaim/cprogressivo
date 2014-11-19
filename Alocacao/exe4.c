#include <stdio.h>
#include <stdlib.h>

int* realoca(int* ptr, int* size)
{
	int count, add;

	printf("Deseja adicionar quantos números: ");
	scanf("%d", &add);

	ptr = (int *) realloc(ptr, (*size + add)*sizeof(int));

	if(ptr)
	{
		for(count=0; count < add; count++)
		{
			printf("Numero[%d]: ", count+1);
			scanf("%d", &ptr[*size + count]);
		}
		*size += add;
	}
	else
	{
		printf("Espaço de memoria insuficiente\n");
		free(ptr);
		exit(1);
	}
	return ptr;
}

void exibe(int* ptr, int size){
	int count;
	for(count = 0; count < size; count++)
		printf("%3d", ptr[count]);
}

int menu(){
	int opcao;

	__fpurge(stdin);
	printf("\nO que deseja fazer? \n");
	printf("0. Sair\n");
	printf("1. Adicionar números\n");
	printf("2. Exibir Lista de números\n");
	printf("Opção: ");
	scanf("%d", &opcao);

	return opcao;
}

int main(void){
	int opcao, 
		size=0,
		*ptr=NULL;

	do
	{

		switch(opcao=menu()){
			case 0:
				opcao=0;
				break;
			case 1:
				ptr=realoca(ptr, &size);
				break;
			case 2:
				exibe(ptr, size);
				break;
			default:
				printf("Opção Invalida!!!\n");
		}
	}while(opcao);

	free(ptr);

	return 0;
}
