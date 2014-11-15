#include <stdio.h>

int main(void)
{
	char caractere1, caractere2;
	int  inteiro1, inteiro2;
	float Float1, Float2;
	double Double1, Double2;

	printf("Caracteres: %d e %d\n", &caractere1, &caractere2);
    printf("Inteiros: %d e %d\n", &inteiro1, &inteiro2);
    printf("Floats: %d e %d\n", &Float1, &Float2);
    printf("Doubles: %d e %d\n", &Double1, &Double2);
    return 0;

}