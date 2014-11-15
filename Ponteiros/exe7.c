#include <stdio.h>

int main(void)
{
	int int1, int2, int3;
	int *ptr_int =&int1;

	printf("Inteiro 1: ");
	scanf("%d", ptr_int);
	printf("Numero inserido: %d\n", *ptr_int);

	ptr_int = &int2;
	printf("Inteiro 2: ");
	scanf("%d", ptr_int);
	printf("Numero inserido: %d\n", *ptr_int);

	ptr_int = &int3;
	printf("Inteiro 3:");
	scanf("%d", ptr_int);
	printf("Numero inserido: %d\n", *ptr_int);

	return 0;

}