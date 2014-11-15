#include <stdio.h>

int dobra(int *num)
{
	(*num) = (*num) * 2;

}

int main(void)
{
	int num;

	printf("Insira um numero: ");
	scanf("%d", &num);

	dobra(&num);
	printf("O dobro dele é: %d\n", num);

	return 0;
}