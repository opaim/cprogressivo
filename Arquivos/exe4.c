#include <stdio.h>
#include <stdlib.h>

int main(void){
	char url[]="poema.txt";
	char ch;
	int num=0;
	FILE *arq;

	arq = fopen(url, "r");
	if(arq == NULL)
		printf("Erro ao abrir o arquivo [%s]\n", url);
	else
		while((ch = fgetc(arq)) != EOF){
			putchar(ch);
			if(ch == '\n')
				num++;
		}
	
	printf("\nExistem %d linhas no arquivo [%s].", num, url);
	fclose(arq);

	return 0;
}