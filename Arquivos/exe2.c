#include <stdio.h>

int main(void){
	char url[]="char.txt";
	char ch;
	FILE *arq;

	arq = fopen(url, "a");
	if(arq == NULL)
		printf("Erro, não foi possível abrir o arquivo\n");
	
	do{
		printf("Caractere: ");
		ch=getchar();
		fflush(stdin);
		fputc(ch, arq);
	}while(ch != '\n');

	fclose(arq);

	return 0;
}
