#include <stdio.h>

int main(void){
	char url[]="arquivo.txt",
		ch1, ch2, ch3;
	FILE *arq;

	arq=fopen(url, "r");

	if(arq == NULL)
		printf("Erro ao abrir o aquivo [%s]", url);
	else
		while( (fscanf(arq, "%c %c %c\n", &ch1, &ch2, &ch3)) != EOF)
			printf("%c %c %c\n", ch1, ch2, ch3);

	fclose(arq);

	return 0;
}