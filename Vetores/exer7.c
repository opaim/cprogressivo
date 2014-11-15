#include <stdio.h>

void getDigitos(int num, int dig[]){
	int a; 
	
	for (a=0;a<4;a++)
	{
		dig[a]=num%10;
		num=num/10;
		//printf("%d\n", dig[a]);
	}

}

void verPalindromo(int dig[]){
	int result;
	 if(dig[0] == dig[3] && dig[1] == dig[2])
	 	printf("É um palindromo!\n");
	 else
	 	printf("Não é palindromo\n");
}

int main(void){
	
	int num, dig[4];

	printf("Digite um numero de 4 digitos pra verificar se o mesmo é um palindromo\n");
	scanf("%d", &num);
	getDigitos(num, dig);
	verPalindromo(dig);
	
}