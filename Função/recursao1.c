#include <stdio.h>

int soma(int n)
{
	if(n == 1)
		return 1;
	else
		return (n + soma(n-1));
	
}

int main ()
{
	int n;
	printf("Digite  um numero inteiro positivo: \n");
	scanf("%d", &n);

	printf("Soma: %d\n", soma(n)); 
}