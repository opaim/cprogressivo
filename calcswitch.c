#include <stdio.h>

int main (void){
	char oper;
	int num1,num2;

	printf ("\nEscolha a operaçao desejada:");
		scanf("%c", &oper);

	printf("\nDigite o primeiro numero da operacao");
		scanf("%d", &num1);

	printf("\nDigite o seguno numero da operacao");
		scanf("%d", &num2);

	switch(oper){
		case '+':
			printf("%d\n", num1 + num2);
			break;
		case '-':
			printf("%d\n", num1 - num2);
			break;
		case '*':
			printf("%d\n", num1 * num2);
			break;
		case '/':
			printf("%d\n", num1 / num2);
			break;
		default :
			printf("\nVoce digitou um aoperaçao invalida");
	}	
}