#include <stdio.h>

int main(void)
{
	char curso[20] = "C Progressivo";
	int count;

	for(count=0; count < 20; count++){
		printf("%c", curso[count]);
	}

	for(count=0; count < 20; count++);
		printf("\nO '\\0' esta na posição %d da string\n", count);

	return 0;
}