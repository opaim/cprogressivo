#include <stdio.h>

int main(void)
{
	int inteiro;
	int *inteiro_ptr = &inteiro;

	double Double;
	double *Double_ptr = &Double;

	printf("Endereço da variável 'inteiro': %d\n", &inteiro);
	printf("Endereço armazenado no ponteiro 'inteiro_ptr': %d\n\n", inteiro_ptr);

	printf("Endereço da variável 'Double': %d\n", &Double);
	printf("Endereço armazenado no ponteiro 'Double_ptr': %d\n\n", Double_ptr);

	printf("Apos o uso dos ponteiros, vamos aponta-los para NULL\n\n");
    inteiro_ptr = NULL;
    Double_ptr = NULL;
    printf("Endereco armazenado no ponteiro 'inteiro_ptr': %d\n", inteiro_ptr);
    printf("Endereco armazenado no ponteiro 'Double_ptr': %d\n", Double_ptr);
    return 0; 


}