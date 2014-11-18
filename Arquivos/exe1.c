#include <stdio.h>

int main(void){
	char url[]="char.txt";
	char ch;
	FILE *arq;

	printf("Caractere: ");
	ch=getchar();

	arq = fopen(url, "w");
	if(arq == NULL)
		printf("Erro, não foi possível abrir o arquivo\n");
	else{
		fputc(ch, arq);
		fclose(arq);
	}
	return 0;
}
		
